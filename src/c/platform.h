#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>


// FIXME
var Memory__getString(var* str) {
        static var in = 0;
	var sb;
        var m, i;
        if (in) {
                return 0;
        }
        in = -1;

        i = 0;
        while (str[i]) {
                i++;
        }
        m = string__new(i + 1);
	sb = string__get_buf(m);
	i = 0;
        while (str[i]) {
		 __poke(sb+i, str[i]); // FIXME UTF-8
		i++;
	}
 	__poke(sb+i, 0); 

        in = 0;
        return (var)m;
}

var std__alloc(var size, var type)
{
	var *m;
	m = (var*)malloc(sizeof(var) * (size + 1));
	m[0] = -(size + 1);
//	m[1] = type;
//	m[1] = 0; // FIXME 0 = bytes, 1 = array ...
	return ((var)m / sizeof(var)) + 1;
}

// FIXME
var Memory__alloc(var s) {
	return std__alloc(s, 0);
}

var bytes__new(var size)
{
	var s;
	var r;
	s = (size + sizeof(var) - 1) / sizeof(var);
	r = std__alloc(s + 1, 0);
	__poke(r+0, size);
	return r;
}

var bytes__get_buf(var bb)
{
	return (bb+1) * sizeof(var);
}

var bytes__get_at(var bb, var at)
{
	return ((char*)((bb+1) * sizeof(var)))[at];
}

var bytes__set_at(var bb, var at, var v)
{
	((char*)((bb+1) * sizeof(var)))[at] = v & 0xFF;
	return 0;
}

var std__get_size(var mem)
{
	var *m;
	m = (var*)((mem - 1) * sizeof(var));
	return (-m[0]) - 1;
}

var std__free(var mem)
{
	var *m;
	m = (var*)((mem - 1) * sizeof(var));
	free(m);
	return 0;
}

var std__string2native(var data, char *buf, size_t maxlen)
{
	var l;
	var sb;
	var i;

	l = string__length(data);
	sb = string__get_buf(data);
	i = 0;
	while (i <= l && ((size_t)i < maxlen)) {
		buf[i] = __peek(sb+i); // FIXME UTF-8
		i++;
	}
	if ((size_t)i == maxlen) {
		buf[i-1] = 0;
	} else {
		buf[i] = 0;
	}
	return i;
}
	
var std__native2string(char *buf)
{
	size_t l;
	var sb;
	var data;
	size_t i;

	l = strlen(buf);
	data = string__new(l + 1);
	sb = string__get_buf(data);
	i = 0;
	while (i <= l) {
		__poke(sb + i, (var)buf[i]); // FIXME UTF-8
		i++;
	}
	return data;
}
	
var std__mkfolder(var fs_cb)
{
	var status = 200;
	var data = 0;
	time_t t;
	struct tm *tp;
	char buf[255];
	int r;

	t = time(NULL);
	if (t < 0) {
		status = 403;
	} else {
		tp = gmtime(&t);
		if (tp == NULL) {
			status = 403;
		} else {
			snprintf(buf, sizeof(buf), 
				"%s/%04d%02d%02d%02d%02d%02d", 
				getenv("HOME"), tp->tm_year + 1900,
				tp->tm_mon + 1, tp->tm_mday,
				tp->tm_hour, tp->tm_min, tp->tm_sec);
		}
	}
	if (status == 200) {
		r = mkdir(buf, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
		if (r == 0) {
			data = std__native2string(buf);
		} else {
			data = std__native2string(strerror(errno));
			status = 403;
		}
	}	
	response__set_string(fs_cb, status, data);
	return 0;
}

static var std__concat(var folder, var name, char *buf, var size)
{
	var l;
	var fullpath;

	fullpath = string__new(1024);
	string__add(fullpath, folder);
	string__add(fullpath, name);
	l = std__string2native(fullpath, buf, size);
	if (l >= size) {
		string__dispose(fullpath);
		fullpath = 0;
	}
	return fullpath;
}


var std__mkdir(var folder, var name, var fs_cb)
{
	char buf[1024];
	var status = 200;
	var data = 0;
	var fullpath;
	int r;

	fullpath = std__concat(folder, name, buf, sizeof(buf));

	if (fullpath == 0) {
		data = std__native2string("invalid name.");
		status = 403;
	} else {
		r = mkdir(buf, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
		if (r == 0) {
			data = fullpath;
		} else {
			string__dispose(fullpath);
			data = std__native2string(strerror(errno));
			status = 403;
		}
	}
	response__set_string(fs_cb, status, data);
	return 0;
}

var std__read(var folder, var name, var seek, var size, var fs_cb)
{
	char fname[1024];
	var status = 200;
	var data = 0;
	var fullpath;
	FILE *fp;
	char *buf;
	int r;
	struct stat st;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		data = std__native2string("invalid name.");
		status = 403;
	} else {
		if (size < 1) {
			if (access(fname, 0) == 0) {
				stat(fname, &st);
				if ((st.st_mode & S_IFDIR) != 0) {
					data = std__native2string(
						"path is a directory.");
					status = 403;
				} else {
					size = st.st_size;
				}
			}
		}
		if (seek < 0) {
			seek = 0;
		}
		if (size > 0 && status == 200) {
			data = bytes__new(size);
			buf = (char*)bytes__get_buf(data);
			fp = fopen(fname, "r");
			if (fp) {
				fseek(fp, seek, SEEK_SET);
				r = fread(buf, 1, size, fp);
				fclose(fp);
			} else {
				r = -1;
			}
			__poke(data+0, r);
			if (r > size || r < 0) {
				bytes__dispose(data);
				data = std__native2string(
					"error reading file.");
				status = 403;
			} else {		
			      	if (r == 0) {
					status = 201;
				}
				response__set_bytes(fs_cb, status, data);
				return 0;
			}
		} else {
			data = std__native2string("nothing to read.");
			status = 403;
		}
	}
	response__set_string(fs_cb, status, data);
	return 0;
}

var std__write(var folder, var name, var data, var seek, var size, var fs_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	FILE *fp;
	char *buf;
	int r;
	struct stat st;
	char *mode = "w";

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		if (access(fname, 0) == 0) {
			stat(fname, &st);
			if ((st.st_mode & S_IFDIR) != 0) {
				string__dispose(fullpath);
				outstr = std__native2string(
					"path is a directory.");
				status = 403;
			} else {
				mode = "rs+";
			}
		}
		if (seek < 0) {
			seek = 0;
			truncate(fname, 0);
		}
		if (size > 0 && status == 200) {
			buf = (char*)bytes__get_buf(data);
			fp = fopen(fname, mode);
			if (fp) {
				if (seek != 0) {
					fseek(fp, seek, SEEK_SET);
				}
				r = fwrite(buf, 1, size, fp);
				fclose(fp);
			} else {
				r = -1;
			}
			__poke(data+0, r);
			if (r != size) {
				string__dispose(fullpath);
				outstr = std__native2string(
					"error writing file.");
				status = 403;
			} else {
				outstr = fullpath;
			}
		} else {
			string__dispose(fullpath);
			data = std__native2string("nothing to read.");
			status = 403;
		}
	}
	response__set_string(fs_cb, status, outstr);
	return 0;
}

var std__filesize(var folder, var name, var fs_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	var size;
	struct stat st;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		if (access(fname, 0) == 0) {
			stat(fname, &st);
			if ((st.st_mode & S_IFDIR) != 0) {
				string__dispose(fullpath);
				outstr = std__native2string(
					"path is a directory.");
				status = 403;
			} else {
				size = st.st_size;
				string__set_int(fullpath, size);
				outstr = fullpath;
			}
		} else {
			string__dispose(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		}
	}
	response__set_string(fs_cb, status, outstr);
	return 0;
}

var std__scandir(var folder, var name, var fs_cb)
{
	char dname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	struct dirent *dp;
	DIR *dir;
	char *s;
	char *outp;
	size_t outl;
	size_t outa;
	size_t l;
	size_t dl;
	char *tmp;

	fullpath = std__concat(folder, name, dname, sizeof(dname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		dir = opendir(dname);
		if (dir == 0) {
			string__dispose(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		}		
	}
	if (status == 200) {
		string__dispose(fullpath);
		
		std__string2native(name, dname, sizeof(dname) - 1);
		dl = strlen(dname);
		if (dl == 0) {
			std__string2native(folder, dname, sizeof(dname) - 1);
			dl = strlen(dname);
			if (dl == 0 || (dname[dl - 1] != '/')) {
				dname[0] = '\0';
				strcat(dname, "./");
				dl = 2;
			}
		} else {
			if (dname[dl - 1] != '/') {
				dname[dl] = '/';
				dl++;
				dname[dl] = '\0';
			}
		}
		dp = readdir(dir);
		outl = 0;
		outa = 4096;
		outp = malloc(outa);
		outp[0] = '\0';
		while (dp != 0) {
			s = dp->d_name;
			if (s[0] == '.' && (s[1] == '\0' ||
				(s[1] == '.' && s[2] == '\0')))
			{

			} else {
				l = strlen(s);
				while ((outa - outl) <= (l + dl + 3)) {
					outa += 4096;
					tmp = malloc(outa);
					tmp[0] = '\0';
					strcat(tmp, outp);	
					free(outp);
					outp = tmp;
				}
				strcat(outp + outl, dname);
				outl += dl;
				strcat(outp + outl, s);
				outl += l;
				if (dp->d_type == DT_DIR) {
					outp[outl] = '/';
					outl++;
				}
				outp[outl] = '\n';
				outl++;
			}
			dp = readdir(dir);
		}
		closedir(dir);
		outstr = std__native2string(outp);
		free(outp);
	}
	response__set_string(fs_cb, status, outstr);
	return 0;
}

var std__rmdir(var folder, var name, var fs_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	var r;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		r = rmdir(fname);
		if (r != 0) {
			string__dispose(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		} else {
			outstr = fullpath;
		}		
	}
	response__set_string(fs_cb, status, outstr);
	return 0;
}

var std__unlink(var folder, var name, var fs_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	var r;
	struct stat st;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		if (access(fname, 0) == 0) {
			stat(fname, &st);
			if ((st.st_mode & S_IFDIR) != 0) {
				string__dispose(fullpath);
				outstr = std__native2string(
					"path is a directory.");
				status = 403;
			} else {
				r = unlink(fname);
				if (r == -1) {
					string__dispose(fullpath);
					outstr = std__native2string(
						strerror(errno));
					status = 403;
				} else {
					outstr = fullpath;
				}
			}
		} else {
			string__dispose(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		}
	}
	response__set_string(fs_cb, status, outstr);
	return 0;
}

var std__echo_nl()
{
	printf("\n");
	return 0;
}

var std__echo_int(var n)
{
	printf("%ld", n);
	return 0;
}

var std__echo(var str)
{
	var l;
	char *buf;
	l = string__length(str) * 6 + 1;
	buf = malloc(l);
	std__string2native(str, buf, l);
	printf("%s", buf);
	free(buf);
	return 0;
}

var std__exit(var n)
{
	exit(n);
	return 0;
}

static var std_args = 0;

var std__get_args()
{
	return std_args;
}

int main(int argc, char *argv[]) {
	int i;
	var s;
	std_args = array__new(argc);
	for (i = 0; i < argc; i++) {
		s = std__native2string(argv[i]);
		__poke(std_args+i, s);
	}
	//__poke(std_args+i, 0);
	main__main();
	// FIXME cleanup
	return 0;
}

