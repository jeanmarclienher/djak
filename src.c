
#ifndef var
#ifdef _WIN64
#include <windows.h>
#define var __int64
#else
#define var long
#endif
#define __poke(a, v) __peek((a)) = v
//#define __peek(a) (((var*)(a))[0])
#define __peek(a) (((var*)((a)*sizeof(var)))[0])
#endif

#if 0

#endif

#ifndef JACK_std_H
#define JACK_std_H
var std__delete(var o);
#endif


#if 0

#endif

#ifndef JACK_console_H
#define JACK_console_H
var console__log(var str);
var console__log_str(var str);
var console__log_int(var n);
#endif


#if 0

#endif

#ifndef JACK_bytes_H
#define JACK_bytes_H
var bytes__dispose(var __this);
var bytes__get_size(var __this);
#endif


#if 0

#endif

#ifndef JACK_response_H
#define JACK_response_H
var response__new(var type_, var instance_);
var response__dispose(var __this);
var response__clear(var __this);
var response__set_string(var __this, var status_, var data_);
var response__set_bytes(var __this, var status_, var data_);
var response__get_status(var __this);
var response__get_string(var __this);
var response__get_bytes(var __this);
var response__validate(var __this);
#endif


#if 0

#endif

#ifndef JACK_bignum_H
#define JACK_bignum_H
var bignum__new();
var bignum__get_string(var __this);
var bignum__add(var __this, var a, var b);
var bignum__sub(var __this, var a, var b);
var bignum__mul(var __this, var a, var b);
var bignum__div(var __this, var a, var b);
var bignum__rem(var __this, var a, var b);
#endif


#if 0

#endif

#ifndef JACK_hash_H
#define JACK_hash_H
#define DEF__hash__Cnext 0
#define DEF__hash__Chash 1
#define DEF__hash__Ckey 2
#define DEF__hash__Cvalue 3
var hash__new(var size_);
var hash__dispose(var __this);
var hash__add(var __this, var key, var value);
var hash__get(var __this, var key);
var hash__each(var __this, var res);
#endif


#if 0

#endif

#ifndef JACK_array_H
#define JACK_array_H
var array__new(var size);
var array__dispose(var __this);
var array__get_size(var __this);
#endif


#if 0

#endif

#ifndef JACK_Atoken_H
#define JACK_Atoken_H
var Atoken__new(var type1, var _data1, var line1, var file1);
var Atoken__dispose(var __this);
var Atoken__get_data(var __this);
var Atoken__get_type(var __this);
var Atoken__get_line(var __this);
var Atoken__get_file(var __this);
#endif


#if 0

#endif

#ifndef JACK_file_H
#define JACK_file_H
var file__new(var folder, var fscb);
var file__dispose(var __this);
var file__mkfolder(var __this);
var file__mkdir(var __this, var name);
var file__read(var __this, var name, var seek, var size);
var file__write(var __this, var name, var data, var seek, var size);
var file__filesize(var __this, var name);
var file__scandir(var __this, var name);
var file__rmdir(var __this, var name);
var file__unlink(var __this, var name);
#endif


#if 0

#endif

#ifndef JACK_string_H
#define JACK_string_H
var string__new(var alloc);
var string__dispose(var __this);
var string__get_buf(var __this);
var string__get_size(var __this);
var string__set_size(var __this, var ns);
var string__length(var __this);
var string__set_int(var __this, var num);
var string__set(var __this, var src);
var string__add_char(var __this, var num);
var string__add(var __this, var src);
var string__substr(var __this, var start_pos, var length_, var result);
var string__to_string(var __this);
var string__to_int(var __this);
var string__compare(var __this, var other);
var string__get_hash(var __this);
var string__get_at(var __this, var at);
var string__set_at(var __this, var at, var v);
#endif


#if 0

#endif

#ifndef JACK_Alexer_H
#define JACK_Alexer_H
#define DEF__Alexer__Cstring 1
#define DEF__Alexer__Cquote 2
#define DEF__Alexer__Ccomment 3
#define DEF__Alexer__Casm 4
#define DEF__Alexer__Cnumber 5
#define DEF__Alexer__Cidentifier 6
#define DEF__Alexer__Coperator 7
#define DEF__Alexer__Cerror 8
#define DEF__Alexer__Cnewline 9
#define DEF__Alexer__Cend 10
var Alexer__new();
var Alexer__dispose(var __this);
var Alexer__get_at(var __this, var x);
var Alexer__shift(var __this);
var Alexer__empty(var __this);
var Alexer__set_enable_escape(var __this, var v);
var Alexer__set_source(var __this, var source);
var Alexer__add(var __this, var str_);
var Alexer__tokenize(var __this);
var Alexer__is_digit(var __this, var c);
var Alexer__is_letter(var __this, var c);
var Alexer__is_space(var __this, var c);
var Alexer__next(var __this);
var Alexer__validate(var __this, var type_);
var Alexer__error(var __this, var msg);
var Alexer__state(var __this);
var Alexer__finish(var __this);
#endif


#if 0

#endif

#ifndef JACK_main_H
#define JACK_main_H
var main__main();
#endif


#if 0

#endif

#ifndef JACK_buffer_H
#define JACK_buffer_H
var buffer__new(var initial_size);
var buffer__dispose(var __this);
var buffer__length(var __this);
var buffer__empty(var __this);
var buffer__set_at(var __this, var idx, var elem);
var buffer__get_at(var __this, var idx);
var buffer__push(var __this, var elem);
var buffer__set_last(var __this, var elem);
var buffer__get_last(var __this);
var buffer__pop(var __this);
var buffer__unshift(var __this, var elem);
var buffer__shift(var __this);
#endif


#if 0

#endif

#ifndef JACK_linked_H
#define JACK_linked_H
var linked__new(var parent_, var left_, var right_);
var linked__dispose(var __this);
var linked__set_flags(var __this, var f);
var linked__get_flags(var __this);
var linked__set_data1(var __this, var d);
var linked__set_data2(var __this, var d);
var linked__get_data1(var __this);
var linked__get_data2(var __this);
var linked__set_parent(var __this, var p);
var linked__get_parent(var __this);
var linked__set_right(var __this, var p);
var linked__get_right(var __this);
var linked__set_left(var __this, var p);
var linked__get_left(var __this);
var linked__set_child(var __this, var p);
var linked__get_child(var __this);
var linked__replace_to_left(var __this, var cur, var by);
var linked__pad(var __this, var depth);
var linked__dump(var __this, var depth);
#endif


#if 0

#endif

#ifndef JACK_crypt_H
#define JACK_crypt_H
#endif


#if 0

#endif

#ifndef JACK_dabase_H
#define JACK_dabase_H
#endif


#if 0

#endif

#ifndef JACK_gui_H
#define JACK_gui_H
#endif


#if 0

#endif

#ifndef JACK_Aemmiter_H
#define JACK_Aemmiter_H
var Aemmiter__new();
var Aemmiter__dispose(var __this);
var Aemmiter__emmit(var __this, var par);
var Aemmiter__gen_class(var __this);
var Aemmiter__error(var __this, var e);
var Aemmiter__dump(var __this);
#endif


#if 0

#endif

#ifndef JACK_Aterm_H
#define JACK_Aterm_H
#define DEF__Aterm__Cterminal 1
#define DEF__Aterm__Cany 10
#define DEF__Aterm__Cmaybe 100
#define DEF__Aterm__Cor 1000
#define DEF__Aterm__Cclosed 10000
#define DEF__Aterm__Cparenthesis 100000
var Aterm__new(var token, var parent);
var Aterm__dispose(var __this);
var Aterm__isset(var __this, var flag_);
var Aterm__get_parent(var __this);
var Aterm__set_parent(var __this, var parent_);
var Aterm__get_token(var __this);
var Aterm__set_next(var __this, var n);
var Aterm__set_type(var __this, var type_);
var Aterm__unset_type(var __this, var type_);
var Aterm__close_parenthesis(var __this);
var Aterm__get_next(var __this);
var Aterm__get_child(var __this);
var Aterm__set_child(var __this, var child);
var Aterm__pad(var __this, var p);
var Aterm__dump(var __this, var depth);
var Aterm__gen_func(var __this, var depth, var out_, var prod_, var or);
#endif


#if 0

#endif

#ifndef JACK_Aclass_H
#define JACK_Aclass_H
#define DEF__Aclass__Cstatic 2
#define DEF__Aclass__Cfield 3
#define DEF__Aclass__Cconst 4
#define DEF__Aclass__Cint 5
#define DEF__Aclass__Cchar 6
#define DEF__Aclass__Cvoid 7
#define DEF__Aclass__Cconstructor 8
#define DEF__Aclass__Cfunction 9
#define DEF__Aclass__Cmethod 10
#define DEF__Aclass__Cvirtual 11
#define DEF__Aclass__Cidentifier 12
var Aclass__new(var token);
var Aclass__dispose(var __this);
var Aclass__set_next(var __this, var n);
var Aclass__get_next(var __this);
var Aclass__each(var __this, var res);
var Aclass__get_name(var __this);
var Aclass__get_child(var __this);
var Aclass__set_child(var __this, var child);
var Aclass__pad(var __this, var p);
var Aclass__prepare_kind(var __this, var kind_);
var Aclass__prepare_type(var __this, var type_);
var Aclass__prepare_type_identifier(var __this, var id_);
var Aclass__prepare_set_name(var __this, var id_);
var Aclass__valid_member_name(var __this);
var Aclass__finish_const(var __this, var initialiser_);
var Aclass__finish_subroutine(var __this);
var Aclass__finish_param(var __this);
var Aclass__start_param_list(var __this);
var Aclass__dump(var __this, var depth);
#endif


#if 0

#endif

#ifndef JACK_Aparser_H
#define JACK_Aparser_H
#define DEF__Aparser__Croot 1
#define DEF__Aparser__Cclass_dec 2
#define DEF__Aparser__Cstatement 3
#define DEF__Aparser__Cstatements 4
#define DEF__Aparser__Cexpression 5
#define DEF__Aparser__Creturn_statem1 6
#define DEF__Aparser__Cexpression1 7
#define DEF__Aparser__Cterm 8
#define DEF__Aparser__Cterm1 9
#define DEF__Aparser__Cterm2 10
#define DEF__Aparser__Cexpr_list 11
#define DEF__Aparser__Cexpr_list1 12
#define DEF__Aparser__Csub_call1 13
#define DEF__Aparser__Clet_statem1 14
#define DEF__Aparser__Clet_statem2 15
#define DEF__Aparser__Cdo_statem1 16
#define DEF__Aparser__Cwhile_statem1 17
#define DEF__Aparser__Cwhile_statem2 18
#define DEF__Aparser__Csubrout_body1 19
#define DEF__Aparser__Csubroutine_dec 20
#define DEF__Aparser__Cclass_dec1 21
#define DEF__Aparser__Cif_statem1 22
#define DEF__Aparser__Cif_statem2 23
#define DEF__Aparser__Cbool_expr 24
#define DEF__Aparser__Cbool_expr1 25
#define DEF__Aparser__Cbool_term 26
#define DEF__Aparser__Cbool_term1 27
#define DEF__Aparser__Ccomp_op 28
#define DEF__Aparser__Celse_statem 29
#define DEF__Aparser__Celse_statem1 30
var Aparser__new();
var Aparser__dispose(var __this);
var Aparser__get_data(var __this);
var Aparser__get_next(var __this);
var Aparser__parse(var __this, var lexer_);
var Aparser__error(var __this, var e);
var Aparser__push(var __this, var step_);
var Aparser__pop(var __this);
var Aparser__root(var __this);
var Aparser__class_dec(var __this);
var Aparser__class_dec1(var __this);
var Aparser__class_var_dec(var __this);
var Aparser__var_name(var __this);
var Aparser__type(var __this);
var Aparser__clas_const_dec(var __this);
var Aparser__subroutine_dec(var __this);
var Aparser__param_list(var __this);
var Aparser__direction(var __this);
var Aparser__subrout_body(var __this);
var Aparser__subrout_body1(var __this);
var Aparser__var_dec(var __this);
var Aparser__statements(var __this);
var Aparser__statement(var __this);
var Aparser__if_statem(var __this);
var Aparser__if_statem1(var __this);
var Aparser__else_statem(var __this);
var Aparser__else_statem1(var __this);
var Aparser__while_statem(var __this);
var Aparser__while_statem1(var __this);
var Aparser__while_statem2(var __this);
var Aparser__return_statem(var __this);
var Aparser__return_statem1(var __this);
var Aparser__dolet_statem(var __this);
var Aparser__let_statem(var __this, var id);
var Aparser__let_statem1(var __this);
var Aparser__let_statem2(var __this);
var Aparser__do_statem(var __this, var id);
var Aparser__do_statem1(var __this);
var Aparser__bool_expr(var __this);
var Aparser__bool_expr1(var __this);
var Aparser__expression(var __this);
var Aparser__expression1(var __this);
var Aparser__comp_op(var __this);
var Aparser__bool_op(var __this);
var Aparser__op(var __this);
var Aparser__bool_term(var __this);
var Aparser__bool_term1(var __this);
var Aparser__term(var __this);
var Aparser__subrout_call(var __this, var id);
var Aparser__term1(var __this);
var Aparser__term2(var __this);
var Aparser__sub_call(var __this, var id);
var Aparser__sub_call1(var __this);
var Aparser__expr_list(var __this);
var Aparser__expr_list1(var __this);
var Aparser__eat(var __this);
var Aparser__match_id(var __this, var id);
var Aparser__match_op(var __this, var id);
var Aparser__match_newline(var __this);
var Aparser__match_str(var __this, var id);
var Aparser__state_machine(var __this);
#endif


#if 0

#endif

#ifndef JACK_Amember_H
#define JACK_Amember_H
var Amember__new(var kind, var type, var type_id, var name);
var Amember__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_object_H
#define JACK_object_H
#define DEF__object__CAclass 1
#endif

#define JACK_IMPLEMENTATION
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

#ifdef JACK_IMPLEMENTATION
var std__delete(var o) {
	var type;
	var array_;
	var string_;
	return 0;
	type = __peek(o+-1);
	if (((type)<(1))) {
		return 0;
	}

	if (((type)==(1))) {
		array_ = o;
		std__free(array_);
		return 0;
	}

	if (((type)==(2))) {
		string_ = o;
		string__dispose(string_);
		return 0;
	}

	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var console__log(var str) {
	std__echo(str);
	std__echo_nl();
	return 0;
}
var console__log_str(var str) {
	std__echo(str);
	return 0;
}
var console__log_int(var n) {
	std__echo_int(n);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var bytes__dispose(var __this) {
	std__free(__this);
	return 0;
}
var bytes__get_size(var __this) {
	var m;
	m = __this;
	return __peek(m+0);
}
#endif

#ifdef JACK_IMPLEMENTATION
#define status__ (__this+0)
#define str__ (__this+1)
#define byt__ (__this+2)
#define typ__ (__this+3)
#define instan__ (__this+4)
var response__new(var type_, var instance_) {
	var __this;
	__this = Memory__alloc(5);
	__poke(status__, 0);
	__poke(typ__, type_);
	__poke(instan__, instance_);
	__poke(byt__, 0);
	__poke(str__, 0);
	return __this;
}
var response__dispose(var __this) {
	std__free(__this);
	return 0;
}
var response__clear(var __this) {
	__poke(status__, 0);
	if (((__peek(byt__))!=(0))) {
		bytes__dispose(__peek(byt__));
		__poke(byt__, 0);
	}

	if (((__peek(str__))!=(0))) {
		string__dispose(__peek(str__));
		__poke(str__, 0);
	}

	return 0;
}
var response__set_string(var __this, var status_, var data_) {
	__poke(status__, status_);
	__poke(str__, data_);
	return 0;
}
var response__set_bytes(var __this, var status_, var data_) {
	__poke(status__, status_);
	__poke(byt__, data_);
	return 0;
}
var response__get_status(var __this) {
	return __peek(status__);
}
var response__get_string(var __this) {
	return __peek(str__);
}
var response__get_bytes(var __this) {
	return __peek(byt__);
}
var response__validate(var __this) {
	var aclass;
	if (((__peek(typ__))==(DEF__object__CAclass))) {
		aclass = __peek(instan__);
		Aclass__each(aclass, __this);
	}

	return 0;
}
#undef status__
#undef str__
#undef byt__
#undef typ__
#undef instan__
#endif

#ifdef JACK_IMPLEMENTATION
#define _str__ (__this+0)
var bignum__new() {
	var __this;
	__this = Memory__alloc(1);
	__poke(_str__, string__new(8));
	return __this;
}
var bignum__get_string(var __this) {
	return __peek(_str__);
}
var bignum__add(var __this, var a, var b) {
	return 0;
}
var bignum__sub(var __this, var a, var b) {
	return 0;
}
var bignum__mul(var __this, var a, var b) {
	return 0;
}
var bignum__div(var __this, var a, var b) {
	return 0;
}
var bignum__rem(var __this, var a, var b) {
	return 0;
}
#undef _str__
#endif

#ifdef JACK_IMPLEMENTATION
#define _arr__ (__this+0)
#define size__ (__this+1)
var hash__new(var size_) {
	var __this;
	var i;
	__this = Memory__alloc(2);
	__poke(size__, size_);
	__poke(_arr__, array__new(__peek(size__)));
	i = 0;
	while (((i)<(size_))) {
		__poke(__peek(_arr__)+i, 0);
		i = i+1;
	}
	return __this;
}
var hash__dispose(var __this) {
	array__dispose(__peek(_arr__));
	std__free(__this);
	return 0;
}
var hash__add(var __this, var key, var value) {
	var h;
	var hh;
	var cur;
	var old;
	var next;
	var prev;
	var ret;
	var cmp;
	h = string__get_hash(key);
	hh = h;
	h = h-((h/__peek(size__))*__peek(size__));
	old = __peek(__peek(_arr__)+h);
	if (((old)==(0))) {
		cur = array__new(4);
		__poke(cur+DEF__hash__Cnext, 0);
		__poke(__peek(_arr__)+h, cur);
	}

	next = old;
	prev = 0;
	ret = 0;
	while ((((cur)==(0)))&&(((next)!=(0)))) {
		if (((__peek(next+DEF__hash__Chash))==(hh))) {
			cmp = string__compare(key, __peek(next+DEF__hash__Ckey));
			if (((cmp)>(0))) {
				cur = array__new(4);
				__poke(cur+DEF__hash__Cnext, next);
				if (((prev)==(0))) {
					__poke(__peek(_arr__)+h, cur);
				} else {
					__poke(prev+DEF__hash__Cnext, cur);
				}
			} else {
				if (((cmp)==(0))) {
					cur = next;
					ret = __peek(next+DEF__hash__Cvalue);
				}

			}
		} else {
			if (((__peek(next+DEF__hash__Chash))>(hh))) {
				cur = array__new(4);
				__poke(cur+DEF__hash__Cnext, next);
				if (((prev)==(0))) {
					__poke(__peek(_arr__)+h, cur);
				} else {
					__poke(prev+DEF__hash__Cnext, cur);
				}
			}

		}
		prev = next;
		next = __peek(next+DEF__hash__Cnext);
	}
	if (((cur)==(0))) {
		cur = array__new(4);
		__poke(cur+DEF__hash__Cnext, 0);
		if (((prev)==(0))) {
			__poke(__peek(_arr__)+h, cur);
		} else {
			__poke(prev+DEF__hash__Cnext, cur);
		}
	}

	__poke(cur+DEF__hash__Chash, hh);
	__poke(cur+DEF__hash__Ckey, key);
	__poke(cur+DEF__hash__Cvalue, value);
	return ret;
}
var hash__get(var __this, var key) {
	var h;
	var hh;
	var next;
	var cmp;
	h = string__get_hash(key);
	hh = h;
	h = h-((h/__peek(size__))*__peek(size__));
	next = __peek(__peek(_arr__)+h);
	while (((next)!=(0))) {
		if (((__peek(next+DEF__hash__Chash))==(hh))) {
			cmp = string__compare(key, __peek(next+DEF__hash__Ckey));
			if (((cmp)>(0))) {
				return 0;
			} else {
				if (((cmp)==(0))) {
					return __peek(next+DEF__hash__Cvalue);
				}

			}
		} else {
			if (((__peek(next+DEF__hash__Chash))>(hh))) {
				return 0;
			}

		}
		next = __peek(next+DEF__hash__Cnext);
	}
	return 0;
}
var hash__each(var __this, var res) {
	var next;
	var i;
	i = 0;
	while (((i)<(__peek(size__)))) {
		next = __peek(__peek(_arr__)+i);
		while (((next)!=(0))) {
			response__set_string(res, 200, __peek(next+DEF__hash__Ckey));
			response__set_bytes(res, 200, __peek(next+DEF__hash__Cvalue));
			response__validate(res);
			next = __peek(next+DEF__hash__Cnext);
		}
		i = i+1;
	}
	return 0;
}
#undef _arr__
#undef size__
#endif

#ifdef JACK_IMPLEMENTATION
var array__new(var size) {
	return std__alloc(size, 1);
}
var array__dispose(var __this) {
	std__free(__this);
	return 0;
}
var array__get_size(var __this) {
	return std__get_size(__this);
}
#endif

#ifdef JACK_IMPLEMENTATION
#define type__ (__this+0)
#define _data__ (__this+1)
#define line__ (__this+2)
#define file___ (__this+3)
var Atoken__new(var type1, var _data1, var line1, var file1) {
	var __this;
	__this = Memory__alloc(4);
	__poke(type__, type1);
	__poke(_data__, _data1);
	__poke(line__, line1);
	__poke(file___, file1);
	return __this;
}
var Atoken__dispose(var __this) {
	string__dispose(__peek(_data__));
	std__free(__this);
	return 0;
}
var Atoken__get_data(var __this) {
	return __peek(_data__);
}
var Atoken__get_type(var __this) {
	return __peek(type__);
}
var Atoken__get_line(var __this) {
	return __peek(line__);
}
var Atoken__get_file(var __this) {
	return __peek(file___);
}
#undef type__
#undef _data__
#undef line__
#undef file___
#endif

#ifdef JACK_IMPLEMENTATION
#define _folder__ (__this+0)
#define fs_cb__ (__this+1)
var file__new(var folder, var fscb) {
	var __this;
	__this = Memory__alloc(2);
	__poke(_folder__, string__to_string(folder));
	__poke(fs_cb__, fscb);
	return __this;
}
var file__dispose(var __this) {
	response__clear(__peek(fs_cb__));
	string__dispose(__peek(_folder__));
	std__free(__this);
	return 0;
}
var file__mkfolder(var __this) {
	response__clear(__peek(fs_cb__));
	std__mkfolder(__peek(fs_cb__));
	return 0;
}
var file__mkdir(var __this, var name) {
	response__clear(__peek(fs_cb__));
	std__mkdir(__peek(_folder__), name, __peek(fs_cb__));
	return 0;
}
var file__read(var __this, var name, var seek, var size) {
	response__clear(__peek(fs_cb__));
	std__read(__peek(_folder__), name, seek, size, __peek(fs_cb__));
	return 0;
}
var file__write(var __this, var name, var data, var seek, var size) {
	response__clear(__peek(fs_cb__));
	std__write(__peek(_folder__), name, data, seek, size, __peek(fs_cb__));
	return 0;
}
var file__filesize(var __this, var name) {
	response__clear(__peek(fs_cb__));
	std__filesize(__peek(_folder__), name, __peek(fs_cb__));
	return 0;
}
var file__scandir(var __this, var name) {
	response__clear(__peek(fs_cb__));
	std__scandir(__peek(_folder__), name, __peek(fs_cb__));
	return 0;
}
var file__rmdir(var __this, var name) {
	response__clear(__peek(fs_cb__));
	std__rmdir(__peek(_folder__), name, __peek(fs_cb__));
	return 0;
}
var file__unlink(var __this, var name) {
	response__clear(__peek(fs_cb__));
	std__unlink(__peek(_folder__), name, __peek(fs_cb__));
	return 0;
}
#undef _folder__
#undef fs_cb__
#endif

#ifdef JACK_IMPLEMENTATION
var string___str0[] = {45,0};
var string___str1[] = {48,0};
var string___str2[] = {0};
var string___str3[] = {0};
#define _str__ (__this+0)
#define size__ (__this+1)
var string__new(var alloc) {
	var __this;
	__this = Memory__alloc(2);
	__poke(_str__, array__new(alloc+1));
	__poke(__peek(_str__)+0, 0);
	__poke(size__, alloc);
	return __this;
}
var string__dispose(var __this) {
	array__dispose(__peek(_str__));
	std__free(__this);
	return 0;
}
var string__get_buf(var __this) {
	return __peek(_str__);
}
var string__get_size(var __this) {
	return __peek(size__);
}
var string__set_size(var __this, var ns) {
	var ops;
	var i;
	var tl;
	tl = string__length(__this);
	ns = ns+1;
	if (((__peek(size__))>(ns))) {
		return 0;
	}

	ops = array__new(ns);
	i = 0;
	while (((i)<(tl))) {
		__poke(ops+i, __peek(__peek(_str__)+i));
		i = i+1;
	}
	__poke(ops+i, 0);
	array__dispose(__peek(_str__));
	__poke(_str__, ops);
	__poke(size__, ns-1);
	return 0;
}
var string__length(var __this) {
	var l;
	l = 0;
	while (((l)<(__peek(size__)))) {
		if (((__peek(__peek(_str__)+l))==(0))) {
			return l;
		}

		l = l+1;
	}
	return l;
}
var string__set_int(var __this, var num) {
	var max;
	var next;
	var rem;
	var v;
	var prt;
	max = 10;
	next = 100;
	while (((next)>(max))) {
		max = next;
		next = next*10;
	}
	if (((num)<(0))) {
		string__set(__this, Memory__getString(string___str0));
		num = -num;
	} else {
		if (((num)==(0))) {
			string__set(__this, Memory__getString(string___str1));
			return 0;
		} else {
			string__set(__this, Memory__getString(string___str2));
		}
	}
	prt = 0;
	while (((max)>(1))) {
		rem = num/max;
		rem = rem*max;
		rem = num-rem;
		max = max/10;
		v = rem/max;
		if (((v)!=(0))) {
			prt = 1;
		}

		if (((prt)!=(0))) {
			string__add_char(__this, 48+v);
		}

		num = num-(v*max);
	}
	return 0;
}
var string__set(var __this, var src) {
	var sl;
	var i;
	var srs;
	sl = string__length(src);
	if (((__peek(size__))<(sl))) {
		array__dispose(__peek(_str__));
		__poke(_str__, array__new(sl+1));
		__poke(size__, sl);
	}

	i = 0;
	srs = string__get_buf(src);
	while (((i)<(sl))) {
		__poke(__peek(_str__)+i, __peek(srs+i));
		i = i+1;
	}
	__poke(__peek(_str__)+i, 0);
	return 0;
}
var string__add_char(var __this, var num) {
	var ops;
	var sl;
	var tl;
	var ns;
	var i;
	sl = 6;
	tl = string__length(__this);
	ns = sl+tl+1;
	i = 0;
	if (((__peek(size__))<=(ns))) {
		ns = ns+8;
		ops = array__new(ns);
		while (((i)<(tl))) {
			__poke(ops+i, __peek(__peek(_str__)+i));
			i = i+1;
		}
		array__dispose(__peek(_str__));
		__poke(_str__, ops);
		__poke(size__, ns);
	} else {
		ops = __peek(_str__);
	}
	i = tl;
	__poke(ops+i, num);
	i = i+1;
	__poke(ops+i, 0);
	return 0;
}
var string__add(var __this, var src) {
	var ops;
	var srs;
	var sl;
	var tl;
	var i;
	var j;
	var ns;
	sl = string__length(src);
	tl = string__length(__this);
	ns = sl+tl+1;
	ops = array__new(ns);
	i = 0;
	while (((i)<(tl))) {
		__poke(ops+i, __peek(__peek(_str__)+i));
		i = i+1;
	}
	j = 0;
	srs = string__get_buf(src);
	while (((j)<(sl))) {
		__poke(ops+i, __peek(srs+j));
		j = j+1;
		i = i+1;
	}
	__poke(ops+i, 0);
	array__dispose(__peek(_str__));
	__poke(_str__, ops);
	__poke(size__, ns);
	return 0;
}
var string__substr(var __this, var start_pos, var length_, var result) {
	var ops;
	var i;
	var j;
	var len;
	len = string__length(__this);
	if (((start_pos)<(0))) {
		start_pos = start_pos+len;
	}

	if (((start_pos)<(0))) {
		start_pos = 0;
	}

	if (((length_)<(0))) {
		length_ = len+length_-start_pos;
	} else {
		if (((length_)==(0))) {
			length_ = len;
		}

	}
	if ((((start_pos)>=(len)))||(((length_)<(1)))) {
		string__set(result, Memory__getString(string___str3));
		return 0;
	}

	string__set_size(result, length_+1);
	ops = string__get_buf(result);
	i = 0;
	j = 0;
	while ((((i)<(len)))&&(((j)<(length_)))) {
		if (((i)>=(start_pos))) {
			__poke(ops+j, __peek(__peek(_str__)+i));
			j = j+1;
		}

		i = i+1;
	}
	__poke(ops+j, 0);
	return 0;
}
var string__to_string(var __this) {
	var str;
	str = string__new(string__length(__this)+1);
	string__set(str, __this);
	return str;
}
var string__to_int(var __this) {
	var l;
	var sign;
	var v;
	var c;
	l = 0;
	sign = 1;
	if (((__peek(size__))==(0))) {
		return 0;
	}

	v = 0;
	if (((__peek(__peek(_str__)+0))==(45))) {
		sign = -1;
		l = 1;
	} else {
		if (((__peek(__peek(_str__)+0))==(43))) {
			l = 1;
		}

	}
	while (((l)<(__peek(size__)))) {
		c = __peek(__peek(_str__)+l);
		if (((c)==(0))) {
			l = __peek(size__);
		} else {
			if ((((c)>=(48)))&&(((c)<=(57)))) {
				v = v*10;
				v = v+(c-48);
			} else {
				l = __peek(size__);
			}
		}
		l = l+1;
	}
	return v*sign;
}
var string__compare(var __this, var other) {
	var l;
	var v;
	var os;
	var osi;
	os = string__get_buf(other);
	l = 0;
	osi = string__get_size(other);
	while ((((l)<(__peek(size__))))&&(((l)<(osi)))) {
		if (((__peek(__peek(_str__)+l))==(0))) {
			if (((__peek(os+l))==(0))) {
				return 0;
			} else {
				return -1;
			}
		} else {
			if (((__peek(os+l))==(0))) {
				return 1;
			}

		}
		v = __peek(__peek(_str__)+l)-__peek(os+l);
		if (((v)!=(0))) {
			return v;
		}

		l = l+1;
	}
	if (((osi)>(__peek(size__)))) {
		return -1;
	} else {
		if (((osi)<(__peek(size__)))) {
			return 1;
		}

	}
	return 0;
}
var string__get_hash(var __this) {
	var l;
	var h;
	l = 0;
	h = 0;
	while (((l)<(__peek(size__)))) {
		if (((__peek(__peek(_str__)+l))==(0))) {
			return h;
		}

		h = (h*9)+__peek(__peek(_str__)+l);
		l = l+1;
	}
	return h;
}
var string__get_at(var __this, var at) {
	if ((((at)<(__peek(size__))))&&(((__peek(size__))>=(0)))) {
		return __peek(__peek(_str__)+at);
	}

	return 0;
}
var string__set_at(var __this, var at, var v) {
	if ((((at)<(__peek(size__))))&&(((__peek(size__))>=(0)))) {
		__poke(__peek(_str__)+at, v);
	}

	return 0;
}
#undef _str__
#undef size__
#endif

#ifdef JACK_IMPLEMENTATION
var Alexer___str0[] = {76,101,120,101,114,58,32,0};
var Alexer___str1[] = {32,64,32,40,0};
var Alexer___str2[] = {41,32,58,32,39,0};
var Alexer___str3[] = {39,32,0};
var Alexer___str4[] = {110,101,119,108,105,110,101,32,105,110,32,115,116,114,105,110,103,46,0};
var Alexer___str5[] = {84,79,75,69,78,0};
var Alexer___str6[] = {117,110,116,101,114,109,105,110,97,116,101,100,32,116,111,107,101,110,46,0};
#define _src__ (__this+0)
#define _str__ (__this+1)
#define _pool__ (__this+2)
#define pos__ (__this+3)
#define line__ (__this+4)
#define _token__ (__this+5)
#define type__ (__this+6)
#define c__ (__this+7)
#define len__ (__this+8)
#define enable_escape__ (__this+9)
#define in_string__ (__this+10)
#define in_quote__ (__this+11)
#define in_comment__ (__this+12)
#define in_com_multi__ (__this+13)
#define in_escape__ (__this+14)
#define in_asm__ (__this+15)
#define in_asm_multi__ (__this+16)
#define in_number__ (__this+17)
#define in_identifier__ (__this+18)
#define in_space__ (__this+19)
#define need_char__ (__this+20)
var Alexer__new() {
	var __this;
	__this = Memory__alloc(21);
	__poke(_str__, string__new(1024));
	__poke(_token__, string__new(256));
	__poke(_src__, string__new(1));
	__poke(_pool__, buffer__new(32));
	__poke(pos__, 0);
	__poke(line__, 1);
	__poke(c__, 0);
	__poke(len__, 0);
	__poke(enable_escape__, 0);
	__poke(need_char__, 1);
	__poke(in_string__, 0);
	__poke(in_quote__, 0);
	__poke(in_comment__, 0);
	__poke(in_com_multi__, 0);
	__poke(in_escape__, 0);
	__poke(in_asm__, 0);
	__poke(in_asm_multi__, 0);
	__poke(in_number__, 0);
	__poke(in_identifier__, 0);
	__poke(in_space__, 1);
	return __this;
}
var Alexer__dispose(var __this) {
	buffer__dispose(__peek(_pool__));
	file__dispose(__peek(_src__));
	string__dispose(__peek(_token__));
	string__dispose(__peek(_str__));
	std__free(__this);
	return 0;
}
var Alexer__get_at(var __this, var x) {
	return buffer__get_at(__peek(_pool__), x);
}
var Alexer__shift(var __this) {
	buffer__shift(__peek(_pool__));
	return 0;
}
var Alexer__empty(var __this) {
	return buffer__empty(__peek(_pool__));
}
var Alexer__set_enable_escape(var __this, var v) {
	__poke(enable_escape__, v);
	return 0;
}
var Alexer__set_source(var __this, var source) {
	file__dispose(__peek(_src__));
	__poke(_src__, string__to_string(source));
	return 0;
}
var Alexer__add(var __this, var str_) {
	var ns;
	if (((__peek(len__))<(0))) {
		return 0;
	}

	if (((string__length(str_))<(1))) {
		Alexer__finish(__this);
		return 0;
	}

	if (((__peek(pos__))<(string__length(__peek(_str__))))) {
		ns = string__new(32);
		string__substr(__peek(_str__), __peek(pos__), 0, ns);
		string__add(ns, str_);
		string__dispose(__peek(_str__));
		__poke(_str__, ns);
		string__set(__peek(_str__), str_);
	} else {
		string__set(__peek(_str__), str_);
	}
	__poke(pos__, 0);
	__poke(len__, string__length(__peek(_str__)));
	if (((__peek(need_char__))!=(0))) {
		Alexer__next(__this);
	}

	Alexer__tokenize(__this);
	return 0;
}
var Alexer__tokenize(var __this) {
	var s;
	s = Alexer__state(__this);
	while ((((s)!=(0)))) {
		if (((__peek(need_char__))!=(0))) {
			return 0;
		}

		s = Alexer__state(__this);
	}
	return 0;
}
var Alexer__is_digit(var __this, var c) {
	if ((((__peek(c__))>=(48)))&&(((__peek(c__))<=(57)))) {
		return 1;
	}

	return 0;
}
var Alexer__is_letter(var __this, var c) {
	if (((((__peek(c__))>=(97)))&&(((__peek(c__))<=(122))))||((((__peek(c__))>=(65)))&&(((__peek(c__))<=(90))))) {
		return 1;
	}

	return 0;
}
var Alexer__is_space(var __this, var c) {
	if ((((__peek(c__))==(32)))||(((__peek(c__))==(9)))||(((__peek(c__))==(10)))||(((__peek(c__))==(13)))) {
		return 1;
	}

	return 0;
}
var Alexer__next(var __this) {
	if (((__peek(pos__))>=(__peek(len__)))) {
		__poke(need_char__, 1);
		__poke(c__, 0);
		return 0;
	}

	__poke(need_char__, 0);
	__poke(c__, string__get_at(__peek(_str__), __peek(pos__)));
	__poke(pos__, __peek(pos__)+1);
	return 1;
}
var Alexer__validate(var __this, var type_) {
	var t;
	if (((type_)==(DEF__Alexer__Cnewline))) {
		__poke(line__, __peek(line__)+1);
	}

	t = Atoken__new(type_, __peek(_token__), __peek(line__), __peek(_src__));
	buffer__push(__peek(_pool__), t);
	__poke(_token__, string__new(3));
	return 0;
}
var Alexer__error(var __this, var msg) {
	console__log_str(Memory__getString(Alexer___str0));
	console__log_str(__peek(_src__));
	console__log_str(Memory__getString(Alexer___str1));
	console__log_int(__peek(line__));
	console__log_str(Memory__getString(Alexer___str2));
	console__log_str(__peek(_token__));
	console__log_str(Memory__getString(Alexer___str3));
	console__log(msg);
	__poke(len__, -1);
	return 0;
}
var Alexer__state(var __this) {
	var l;
	var a;
	var b;
	var d;
	if (((__peek(in_escape__))!=(0))) {
		if (((__peek(enable_escape__))==(0))) {
			if (((__peek(c__))!=(10))) {
				string__add_char(__peek(_token__), 92);
				__poke(in_escape__, 0);
				return 1;
			}

			__poke(line__, __peek(line__)+1);
		} else {
			if (((__peek(c__))!=(10))) {
				a = __peek(c__);
				if (((__peek(c__))==(48))) {
					a = 0;
				} else {
					if (((__peek(c__))==(110))) {
						a = 10;
					} else {
						if (((__peek(c__))==(116))) {
							a = 9;
						} else {
							if (((__peek(c__))==(98))) {
								a = 8;
							} else {
								string__add_char(__peek(_token__), 92);
							}
						}
					}
				}
				string__add_char(__peek(_token__), a);
			} else {
				__poke(line__, __peek(line__)+1);
			}
		}
		Alexer__next(__this);
		__poke(in_escape__, 0);
		return 1;
	} else {
		if (((__peek(in_string__))!=(0))) {
			if (((__peek(c__))==(34))) {
				__poke(in_string__, 0);
				Alexer__validate(__this, DEF__Alexer__Cstring);
			} else {
				if (((__peek(c__))==(92))) {
					__poke(in_escape__, 1);
				} else {
					if (((__peek(c__))==(10))) {
						Alexer__error(__this, Memory__getString(Alexer___str4));
						return 0;
					} else {
						string__add_char(__peek(_token__), __peek(c__));
					}
				}
			}
			Alexer__next(__this);
			return 1;
		} else {
			if (((__peek(in_quote__))!=(0))) {
				if (((__peek(c__))==(39))) {
					__poke(in_quote__, 0);
					Alexer__validate(__this, DEF__Alexer__Cquote);
				} else {
					if (((__peek(c__))==(92))) {
						if (((__peek(enable_escape__))!=(0))) {
							__poke(in_escape__, 1);
						}

					} else {
						string__add_char(__peek(_token__), __peek(c__));
					}
				}
				Alexer__next(__this);
				return 1;
			} else {
				if (((__peek(in_comment__))!=(0))) {
					if (((__peek(in_comment__))==(-1))) {
						if (((__peek(c__))==(47))) {
							__poke(in_comment__, 1);
							Alexer__next(__this);
							return 1;
						} else {
							if (((__peek(c__))==(42))) {
								__poke(in_comment__, 0);
								__poke(in_com_multi__, 1);
								Alexer__next(__this);
								return 1;
							}

						}
						__poke(in_comment__, 0);
						string__add_char(__peek(_token__), 47);
						return 1;
					} else {
						if (((__peek(in_comment__))==(1))) {
							if (((__peek(c__))==(35))) {
								__poke(in_asm__, 1);
								__poke(in_comment__, 0);
								Alexer__next(__this);
								return 1;
							}

							__poke(in_comment__, 2);
						}

					}
					if (((__peek(c__))==(10))) {
						__poke(in_comment__, 0);
						Alexer__validate(__this, DEF__Alexer__Ccomment);
						Alexer__validate(__this, DEF__Alexer__Cnewline);
					}

					if (((__peek(c__))==(0))) {
						return 0;
					}

					Alexer__next(__this);
					return 1;
				} else {
					if (((__peek(in_com_multi__))!=(0))) {
						if (((__peek(in_com_multi__))==(1))) {
							if (((__peek(c__))==(35))) {
								__poke(in_asm_multi__, 2);
								__poke(in_com_multi__, 0);
								Alexer__next(__this);
								return 1;
							}

							__poke(in_com_multi__, 2);
						} else {
							if (((__peek(in_com_multi__))==(2))) {
								if (((__peek(c__))==(42))) {
									__poke(in_com_multi__, 3);
									Alexer__next(__this);
									return 1;
								}

							} else {
								if (((__peek(in_com_multi__))==(3))) {
									if (((__peek(c__))==(47))) {
										__poke(in_com_multi__, 0);
										Alexer__validate(__this, DEF__Alexer__Ccomment);
										Alexer__next(__this);
										return 1;
									}

									__poke(in_com_multi__, 2);
								}

							}
						}
						Alexer__next(__this);
						return 1;
					} else {
						if (((__peek(in_asm__))!=(0))) {
							if (((__peek(c__))==(10))) {
								Alexer__validate(__this, DEF__Alexer__Casm);
								Alexer__validate(__this, DEF__Alexer__Cnewline);
								__poke(in_asm__, 0);
								Alexer__next(__this);
								return 1;
							}

							if (((__peek(c__))==(0))) {
								return 0;
							}

							string__add_char(__peek(_token__), __peek(c__));
							Alexer__next(__this);
							return 1;
						} else {
							if (((__peek(in_asm_multi__))!=(0))) {
								if (((__peek(in_asm_multi__))==(2))) {
									if (((__peek(c__))==(42))) {
										__poke(in_asm_multi__, 3);
										Alexer__next(__this);
										return 1;
									}

								} else {
									if (((__peek(in_asm_multi__))==(3))) {
										if (((__peek(c__))==(47))) {
											__poke(in_asm_multi__, 0);
											Alexer__validate(__this, DEF__Alexer__Casm);
											Alexer__next(__this);
											return 1;
										}

										__poke(in_asm_multi__, 2);
									}

								}
								string__add_char(__peek(_token__), __peek(c__));
								Alexer__next(__this);
								return 1;
							} else {
								if (((__peek(in_number__))!=(0))) {
									if (((Alexer__is_digit(__this, __peek(c__)))!=(0))) {
										string__add_char(__peek(_token__), __peek(c__));
										Alexer__next(__this);
									} else {
										__poke(in_number__, 0);
										Alexer__validate(__this, DEF__Alexer__Cnumber);
									}
									return 1;
								} else {
									if (((__peek(in_identifier__))!=(0))) {
										while ((((__peek(c__))==(95)))||(((Alexer__is_letter(__this, __peek(c__)))!=(0)))||(((Alexer__is_digit(__this, __peek(c__)))!=(0)))) {
											string__add_char(__peek(_token__), __peek(c__));
											if (((Alexer__next(__this))==(0))) {
												return 1;
											}

										}
										Alexer__validate(__this, DEF__Alexer__Cidentifier);
										__poke(in_identifier__, 0);
										return 1;
									} else {
										if (((__peek(in_space__))!=(0))) {
											while (Alexer__is_space(__this, __peek(c__))) {
												if (((__peek(c__))==(10))) {
													Alexer__validate(__this, DEF__Alexer__Cnewline);
												}

												if (((Alexer__next(__this))==(0))) {
													return 1;
												}

											}
											__poke(in_space__, 0);
											return 1;
										} else {
											l = string__length(__peek(_token__));
											if (Alexer__is_space(__this, __peek(c__))) {
												if (((l)!=(0))) {
													Alexer__validate(__this, DEF__Alexer__Coperator);
												}

												__poke(in_space__, 1);
												return 1;
											} else {
												if (((l)==(0))) {
													if (((Alexer__is_digit(__this, __peek(c__)))!=(0))) {
														string__add_char(__peek(_token__), __peek(c__));
														Alexer__next(__this);
														__poke(in_number__, 1);
														return 1;
													} else {
														if ((((__peek(c__))==(95)))||(((Alexer__is_letter(__this, __peek(c__)))!=(0)))) {
															string__add_char(__peek(_token__), __peek(c__));
															Alexer__next(__this);
															__poke(in_identifier__, 1);
															return 1;
														} else {
															if (((__peek(c__))==(39))) {
																Alexer__next(__this);
																__poke(in_quote__, 1);
																return 1;
															} else {
																if (((__peek(c__))==(34))) {
																	Alexer__next(__this);
																	__poke(in_string__, 1);
																	return 1;
																} else {
																	if ((((__peek(c__))==(47)))) {
																		Alexer__next(__this);
																		__poke(in_comment__, -1);
																		return 1;
																	}

																}
															}
														}
													}
													string__add_char(__peek(_token__), __peek(c__));
													Alexer__next(__this);
													return 1;
												} else {
													if (((l)==(1))) {
														a = string__get_at(__peek(_token__), 0);
														if (((__peek(c__))==(61))) {
															if ((((a)==(43)))||(((a)==(45)))||(((a)==(58)))||(((a)==(42)))||(((a)==(47)))||(((a)==(37)))||(((a)==(38)))||(((a)==(94)))||(((a)==(124)))||(((a)==(62)))||(((a)==(60)))||(((a)==(126)))) {
																string__add_char(__peek(_token__), __peek(c__));
																Alexer__validate(__this, DEF__Alexer__Coperator);
																Alexer__next(__this);
																return 1;
															} else {
																if ((((a)==(61)))||(((a)==(33)))) {
																	string__add_char(__peek(_token__), __peek(c__));
																	Alexer__next(__this);
																	return 1;
																}

															}
														} else {
															if (((((a)==(43)))&&(((__peek(c__))==(43))))||((((a)==(45)))&&(((__peek(c__))==(62))))||((((a)==(58)))&&(((__peek(c__))==(58))))||((((a)==(124)))&&(((__peek(c__))==(124))))||((((a)==(38)))&&(((__peek(c__))==(38))))||((((a)==(46)))&&(((__peek(c__))==(36))))||((((a)==(45)))&&(((__peek(c__))==(45))))) {
																string__add_char(__peek(_token__), __peek(c__));
																Alexer__validate(__this, DEF__Alexer__Coperator);
																Alexer__next(__this);
																return 1;
															} else {
																if (((((a)==(62)))&&(((__peek(c__))==(62))))||((((a)==(46)))&&(((__peek(c__))==(46))))||((((a)==(60)))&&(((__peek(c__))==(60))))) {
																	string__add_char(__peek(_token__), __peek(c__));
																	Alexer__next(__this);
																	return 1;
																}

															}
														}
														Alexer__validate(__this, DEF__Alexer__Coperator);
														return 1;
													} else {
														if (((l)==(2))) {
															a = string__get_at(__peek(_token__), 0);
															b = string__get_at(__peek(_token__), 1);
															if (((((a)==(33)))&&(((b)==(61)))&&(((__peek(c__))==(61))))||((((a)==(61)))&&(((b)==(61)))&&(((__peek(c__))==(61))))||((((a)==(62)))&&(((b)==(62)))&&(((__peek(c__))==(61))))||((((a)==(46)))&&(((b)==(46)))&&(((__peek(c__))==(46))))||((((a)==(60)))&&(((b)==(60)))&&(((__peek(c__))==(61))))) {
																string__add_char(__peek(_token__), __peek(c__));
																Alexer__validate(__this, DEF__Alexer__Coperator);
																Alexer__next(__this);
																return 1;
															} else {
																if (((((a)==(62)))&&(((b)==(62)))&&(((__peek(c__))==(62))))) {
																	string__add_char(__peek(_token__), __peek(c__));
																	Alexer__next(__this);
																	return 1;
																}

															}
															Alexer__validate(__this, DEF__Alexer__Coperator);
															return 1;
														} else {
															a = string__get_at(__peek(_token__), 0);
															b = string__get_at(__peek(_token__), 1);
															d = string__get_at(__peek(_token__), 2);
															if ((((a)==(62)))&&(((b)==(62)))&&(((d)==(62)))&&(((__peek(c__))==(61)))) {
																string__add_char(__peek(_token__), __peek(c__));
																Alexer__validate(__this, DEF__Alexer__Coperator);
																Alexer__next(__this);
																return 1;
															}

															Alexer__validate(__this, DEF__Alexer__Coperator);
															return 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	console__log(Memory__getString(Alexer___str5));
	return 0;
}
var Alexer__finish(var __this) {
	if (((string__length(__peek(_token__)))>(0))) {
		Alexer__error(__this, Memory__getString(Alexer___str6));
	}

	Alexer__validate(__this, DEF__Alexer__Cend);
	return 0;
}
#undef _src__
#undef _str__
#undef _pool__
#undef pos__
#undef line__
#undef _token__
#undef type__
#undef c__
#undef len__
#undef enable_escape__
#undef in_string__
#undef in_quote__
#undef in_comment__
#undef in_com_multi__
#undef in_escape__
#undef in_asm__
#undef in_asm_multi__
#undef in_number__
#undef in_identifier__
#undef in_space__
#undef need_char__
#endif

#ifdef JACK_IMPLEMENTATION
var main___str0[] = {119,114,111,110,103,32,110,117,109,98,101,114,32,111,102,32,99,111,109,109,97,110,100,32,108,105,110,101,32,97,114,103,117,109,101,110,116,115,0};
var main___str1[] = {0};
var main___str2[] = {0};
var main___str3[] = {0};
var main__main() {
	var str;
	var tmp;
	var args;
	var fd;
	var res;
	var data;
	var n;
	var i;
	var off;
	var lex;
	var par;
	var emi;
	args = std__get_args();
	n = array__get_size(args);
	if (((n)!=(2))) {
		console__log(Memory__getString(main___str0));
		std__exit(-1);
	}

	str = __peek(args+1);
	console__log(str);
	res = response__new(0, 0);
	fd = file__new(Memory__getString(main___str1), res);
	file__read(fd, str, 0, 10);
	off = 0;
	tmp = string__new(100);
	lex = Alexer__new();
	par = Aparser__new();
	emi = Aemmiter__new();
	while (((response__get_status(res))==(200))) {
		data = response__get_bytes(res);
		n = bytes__get_size(data);
		i = 0;
		while (((i)<(n))) {
			string__add_char(tmp, bytes__get_at(data, i));
			i = i+1;
		}
		Alexer__add(lex, tmp);
		string__set(tmp, Memory__getString(main___str2));
		off = off+10;
		file__read(fd, str, off, 10);
	}
	Alexer__add(lex, Memory__getString(main___str3));
	Aparser__parse(par, lex);
	Aemmiter__emmit(emi, par);
	console__log(Aparser__get_data(par));
	data = bytes__new(4);
	bytes__set_at(data, 0, 88);
	file__dispose(fd);
	response__dispose(res);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
#define _arr__ (__this+0)
#define size__ (__this+1)
#define pos__ (__this+2)
var buffer__new(var initial_size) {
	var __this;
	var i;
	__this = Memory__alloc(3);
	__poke(_arr__, array__new(initial_size));
	__poke(size__, initial_size);
	__poke(pos__, 0);
	i = 0;
	while (((i)<(initial_size))) {
		__poke(__peek(_arr__)+i, 0);
		i = i+1;
	}
	return __this;
}
var buffer__dispose(var __this) {
	array__dispose(__peek(_arr__));
	std__free(__this);
	return 0;
}
var buffer__length(var __this) {
	return __peek(pos__);
}
var buffer__empty(var __this) {
	if (((__peek(pos__))>(0))) {
		return 0;
	}

	return 1;
}
var buffer__set_at(var __this, var idx, var elem) {
	var a;
	var i;
	if (((idx)>=(__peek(size__)))) {
		a = array__new(idx+8);
		i = 0;
		while (((i)<(__peek(size__)))) {
			__poke(a+i, __peek(__peek(_arr__)+i));
			i = i+1;
		}
		__poke(size__, idx+8);
		while (((i)<(__peek(size__)))) {
			__poke(a+i, 0);
			i = i+1;
		}
		array__dispose(__peek(_arr__));
		__poke(_arr__, a);
	}

	__poke(__peek(_arr__)+idx, elem);
	if ((((idx+1))>(__peek(pos__)))) {
		__poke(pos__, idx+1);
	}

	return 0;
}
var buffer__get_at(var __this, var idx) {
	return __peek(__peek(_arr__)+idx);
}
var buffer__push(var __this, var elem) {
	var p;
	p = __peek(pos__)+1;
	buffer__set_at(__this, __peek(pos__), elem);
	__poke(pos__, p);
	return 0;
}
var buffer__set_last(var __this, var elem) {
	if (((__peek(pos__))<(1))) {
		return 0;
	}

	__poke(__peek(_arr__)+__peek(pos__)-1, elem);
	return 0;
}
var buffer__get_last(var __this) {
	if (((__peek(pos__))<(1))) {
		return 0;
	}

	return __peek(__peek(_arr__)+__peek(pos__)-1);
}
var buffer__pop(var __this) {
	var elem;
	elem = 0;
	if (((__peek(pos__))>(0))) {
		__poke(pos__, __peek(pos__)-1);
		elem = buffer__get_at(__this, __peek(pos__));
	}

	return elem;
}
var buffer__unshift(var __this, var elem) {
	var i;
	var p;
	p = __peek(pos__)+1;
	buffer__set_at(__this, __peek(pos__), 0);
	i = __peek(pos__);
	while (((i)>(1))) {
		i = i-1;
		__poke(__peek(_arr__)+i, __peek(__peek(_arr__)+i-1));
	}
	__poke(__peek(_arr__)+0, elem);
	__poke(pos__, p);
	return 0;
}
var buffer__shift(var __this) {
	var elem;
	var i;
	var p;
	if (((__peek(pos__))<(1))) {
		return 0;
	}

	p = __peek(pos__)-1;
	elem = buffer__get_at(__this, 0);
	i = 0;
	while (((i)<(__peek(pos__)))) {
		__poke(__peek(_arr__)+i, __peek(__peek(_arr__)+i+1));
		i = i+1;
	}
	__poke(pos__, p);
	return elem;
}
#undef _arr__
#undef size__
#undef pos__
#endif

#ifdef JACK_IMPLEMENTATION
var linked___str0[] = {32,32,0};
var linked___str1[] = {0};
var linked___str2[] = {32,0};
var linked___str3[] = {76,0};
var linked___str4[] = {82,0};
#define parent__ (__this+0)
#define left__ (__this+1)
#define right__ (__this+2)
#define child__ (__this+3)
#define data1__ (__this+4)
#define data2__ (__this+5)
#define flags__ (__this+6)
var linked__new(var parent_, var left_, var right_) {
	var __this;
	__this = Memory__alloc(7);
	__poke(parent__, parent_);
	__poke(left__, left_);
	__poke(right__, right_);
	__poke(child__, 0);
	__poke(data1__, 0);
	__poke(data2__, 0);
	__poke(flags__, 0);
	return __this;
}
var linked__dispose(var __this) {
	std__free(__this);
	return 0;
}
var linked__set_flags(var __this, var f) {
	__poke(flags__, f);
	return 0;
}
var linked__get_flags(var __this) {
	return __peek(flags__);
}
var linked__set_data1(var __this, var d) {
	__poke(data1__, d);
	return 0;
}
var linked__set_data2(var __this, var d) {
	__poke(data2__, d);
	return 0;
}
var linked__get_data1(var __this) {
	return __peek(data1__);
}
var linked__get_data2(var __this) {
	return __peek(data2__);
}
var linked__set_parent(var __this, var p) {
	__poke(parent__, p);
	return 0;
}
var linked__get_parent(var __this) {
	return __peek(parent__);
}
var linked__set_right(var __this, var p) {
	__poke(right__, p);
	return 0;
}
var linked__get_right(var __this) {
	return __peek(right__);
}
var linked__set_left(var __this, var p) {
	__poke(left__, p);
	return 0;
}
var linked__get_left(var __this) {
	return __peek(left__);
}
var linked__set_child(var __this, var p) {
	__poke(child__, p);
	return 0;
}
var linked__get_child(var __this) {
	return __peek(child__);
}
var linked__replace_to_left(var __this, var cur, var by) {
	if (((__peek(right__))==(cur))) {
		__poke(right__, by);
	} else {
		if (((__peek(left__))==(cur))) {
			__poke(left__, by);
		} else {
			if (((__peek(child__))==(cur))) {
				__poke(child__, by);
			} else {
				return 0;
			}
		}
	}
	linked__set_parent(by, __this);
	linked__set_parent(cur, by);
	linked__set_left(by, cur);
	return 1;
}
var linked__pad(var __this, var depth) {
	var i;
	i = depth;
	while (((i)>(0))) {
		i = i-1;
		console__log_str(Memory__getString(linked___str0));
	}
	return 0;
}
var linked__dump(var __this, var depth) {
	var s;
	var to;
	if (((__this)==(0))) {
		return 0;
	}

	if (((__peek(data1__))!=(0))) {
		to = __peek(data1__);
		s = Atoken__get_data(to);
	} else {
		s = Memory__getString(linked___str1);
	}
	linked__pad(__this, depth);
	console__log_int(__this);
	console__log_str(Memory__getString(linked___str2));
	console__log(s);
	linked__pad(__this, depth);
	console__log(Memory__getString(linked___str3));
	linked__dump(__peek(left__), depth+1);
	linked__pad(__this, depth);
	console__log(Memory__getString(linked___str4));
	linked__dump(__peek(right__), depth+1);
	return 0;
}
#undef parent__
#undef left__
#undef right__
#undef child__
#undef data1__
#undef data2__
#undef flags__
#endif

#ifdef JACK_IMPLEMENTATION
#endif

#ifdef JACK_IMPLEMENTATION
#endif

#ifdef JACK_IMPLEMENTATION
#endif

#ifdef JACK_IMPLEMENTATION
var Aemmiter___str0[] = {47,47,32,99,108,97,115,115,32,0};
var Aemmiter___str1[] = {10,0};
#define _data__ (__this+0)
#define clas__ (__this+1)
#define class_name__ (__this+2)
#define _proc__ (__this+3)
#define _stk__ (__this+4)
#define token1__ (__this+5)
#define token2__ (__this+6)
var Aemmiter__new() {
	var __this;
	__this = Memory__alloc(7);
	__poke(_proc__, buffer__new(100));
	__poke(_stk__, buffer__new(100));
	__poke(_data__, string__new(1024));
	__poke(token1__, 0);
	__poke(token2__, 0);
	return __this;
}
var Aemmiter__dispose(var __this) {
	buffer__dispose(__peek(_proc__));
	buffer__dispose(__peek(_stk__));
	string__dispose(__peek(_data__));
	std__free(__this);
	return 0;
}
var Aemmiter__emmit(var __this, var par) {
	__poke(clas__, Aparser__get_next(par));
	while (((__peek(clas__))!=(0))) {
		Aemmiter__gen_class(__this);
		__poke(clas__, Aclass__get_next(__peek(clas__)));
	}
	console__log(__peek(_data__));
	return 1;
}
var Aemmiter__gen_class(var __this) {
	var to;
	to = Aclass__get_name(__peek(clas__));
	__poke(class_name__, Atoken__get_data(to));
	string__add(__peek(_data__), Memory__getString(Aemmiter___str0));
	string__add(__peek(_data__), __peek(class_name__));
	string__add(__peek(_data__), Memory__getString(Aemmiter___str1));
	return 0;
}
var Aemmiter__error(var __this, var e) {
	console__log(e);
	Aemmiter__dump(__this);
	std__exit(-1);
	return 0;
}
var Aemmiter__dump(var __this) {
	return 0;
}
#undef _data__
#undef clas__
#undef class_name__
#undef _proc__
#undef _stk__
#undef token1__
#undef token2__
#endif

#ifdef JACK_IMPLEMENTATION
var Aterm___str0[] = {9,0};
var Aterm___str1[] = {0};
var Aterm___str2[] = {32,0};
var Aterm___str3[] = {32,124,32,0};
var Aterm___str4[] = {32,42,32,0};
var Aterm___str5[] = {32,63,32,0};
var Aterm___str6[] = {67,0};
var Aterm___str7[] = {78,0};
var Aterm___str8[] = {45,45,45,45,45,0};
var Aterm___str9[] = {32,42,32,0};
var Aterm___str10[] = {32,63,32,0};
var Aterm___str11[] = {9,105,102,32,40,114,32,61,61,32,48,41,32,123,32,114,32,58,61,32,0};
var Aterm___str12[] = {40,41,59,32,125,10,0};
var Aterm___str13[] = {9,0};
var Aterm___str14[] = {40,41,59,10,0};
#define tok__ (__this+0)
#define next__ (__this+1)
#define children__ (__this+2)
#define par__ (__this+3)
#define type__ (__this+4)
var Aterm__new(var token, var parent) {
	var __this;
	__this = Memory__alloc(5);
	__poke(tok__, token);
	__poke(next__, 0);
	__poke(children__, 0);
	__poke(par__, parent);
	__poke(type__, 0);
	return __this;
}
var Aterm__dispose(var __this) {
	std__free(__this);
	return 0;
}
var Aterm__isset(var __this, var flag_) {
	var p;
	p = (__peek(type__)/(flag_*10))*(flag_*10);
	p = __peek(type__)-p;
	if (((p)>=(flag_))) {
		return 1;
	}

	return 0;
}
var Aterm__get_parent(var __this) {
	return __peek(par__);
}
var Aterm__set_parent(var __this, var parent_) {
	__poke(par__, parent_);
	return 0;
}
var Aterm__get_token(var __this) {
	return __peek(tok__);
}
var Aterm__set_next(var __this, var n) {
	__poke(next__, n);
	return 0;
}
var Aterm__set_type(var __this, var type_) {
	__poke(type__, __peek(type__)+type_);
	return 0;
}
var Aterm__unset_type(var __this, var type_) {
	__poke(type__, __peek(type__)-type_);
	return 0;
}
var Aterm__close_parenthesis(var __this) {
	var p;
	p = __peek(par__);
	while ((((p)!=(0)))&&(((Aterm__isset(p, DEF__Aterm__Cparenthesis))==(0)))) {
		p = Aterm__get_parent(p);
	}
	if (((p)!=(0))) {
		Aterm__unset_type(p, DEF__Aterm__Cparenthesis);
		Aterm__set_type(p, DEF__Aterm__Cclosed);
	}

	return p;
}
var Aterm__get_next(var __this) {
	return __peek(next__);
}
var Aterm__get_child(var __this) {
	return __peek(children__);
}
var Aterm__set_child(var __this, var child) {
	__poke(children__, child);
	return 0;
}
var Aterm__pad(var __this, var p) {
	while (((p)>(0))) {
		p = p-1;
		console__log_str(Memory__getString(Aterm___str0));
	}
	return 0;
}
var Aterm__dump(var __this, var depth) {
	var s;
	if (((__this)==(0))) {
		return 0;
	}

	if (((__peek(tok__))!=(0))) {
		s = Atoken__get_data(__peek(tok__));
	} else {
		s = Memory__getString(Aterm___str1);
	}
	Aterm__pad(__this, depth);
	console__log_int(__this);
	console__log_str(Memory__getString(Aterm___str2));
	if (Aterm__isset(__this, DEF__Aterm__Cor)) {
		console__log_str(Memory__getString(Aterm___str3));
	}

	if (Aterm__isset(__this, DEF__Aterm__Cany)) {
		console__log_str(Memory__getString(Aterm___str4));
	}

	if (Aterm__isset(__this, DEF__Aterm__Cmaybe)) {
		console__log_str(Memory__getString(Aterm___str5));
	}

	console__log(s);
	if (((__peek(children__))!=(0))) {
		Aterm__pad(__this, depth);
		console__log(Memory__getString(Aterm___str6));
		Aterm__dump(__peek(children__), depth+1);
	}

	if (((__peek(next__))!=(0))) {
		Aterm__pad(__this, depth);
		console__log(Memory__getString(Aterm___str7));
		Aterm__dump(__peek(next__), depth);
	}

	return 0;
}
var Aterm__gen_func(var __this, var depth, var out_, var prod_, var or) {
	var s;
	if (((__this)==(0))) {
		return 0;
	}

	if (((__peek(tok__))!=(0))) {
		s = Atoken__get_data(__peek(tok__));
	} else {
		s = Memory__getString(Aterm___str8);
	}
	if (Aterm__isset(__this, DEF__Aterm__Cany)) {
		console__log_str(Memory__getString(Aterm___str9));
	}

	if (Aterm__isset(__this, DEF__Aterm__Cmaybe)) {
		console__log_str(Memory__getString(Aterm___str10));
	}

	console__log(s);
	if (((__peek(children__))!=(0))) {
		Aterm__gen_func(__peek(children__), depth+1, out_, prod_, 0);
	} else {
		if ((((Aterm__isset(__this, DEF__Aterm__Cor))!=(0)))||(((or)!=(0)))) {
			string__add(out_, Memory__getString(Aterm___str11));
			string__add(out_, s);
			string__add(out_, Memory__getString(Aterm___str12));
			or = 1;
		} else {
			or = 0;
			string__add(out_, Memory__getString(Aterm___str13));
			string__add(out_, s);
			string__add(out_, Memory__getString(Aterm___str14));
		}
	}
	if (((__peek(next__))!=(0))) {
		Aterm__gen_func(__peek(next__), depth, out_, prod_, or);
	}

	return 0;
}
#undef tok__
#undef next__
#undef children__
#undef par__
#undef type__
#endif

#ifdef JACK_IMPLEMENTATION
var Aclass___str0[] = {9,0};
var Aclass___str1[] = {0};
var Aclass___str2[] = {32,0};
var Aclass___str3[] = {67,0};
#define tok__ (__this+0)
#define next__ (__this+1)
#define children__ (__this+2)
#define current__ (__this+3)
#define parenthesis__ (__this+4)
#define operation__ (__this+5)
#define prep_kind__ (__this+6)
#define prep_type__ (__this+7)
#define prep_type_id__ (__this+8)
#define prep_name__ (__this+9)
#define members__ (__this+10)
#define member__ (__this+11)
var Aclass__new(var token) {
	var __this;
	__this = Memory__alloc(12);
	__poke(tok__, token);
	__poke(next__, 0);
	__poke(members__, hash__new(256));
	return __this;
}
var Aclass__dispose(var __this) {
	hash__dispose(__peek(members__));
	std__free(__this);
	return 0;
}
var Aclass__set_next(var __this, var n) {
	__poke(next__, n);
	return 0;
}
var Aclass__get_next(var __this) {
	var res;
	res = response__new(DEF__object__CAclass, __this);
	hash__each(__peek(members__), res);
	response__dispose(res);
	return __peek(next__);
}
var Aclass__each(var __this, var res) {
	console__log(response__get_string(res));
	return 0;
}
var Aclass__get_name(var __this) {
	return __peek(tok__);
}
var Aclass__get_child(var __this) {
	return __peek(children__);
}
var Aclass__set_child(var __this, var child) {
	__poke(children__, child);
	return 0;
}
var Aclass__pad(var __this, var p) {
	while (((p)>(0))) {
		p = p-1;
		console__log_str(Memory__getString(Aclass___str0));
	}
	return 0;
}
var Aclass__prepare_kind(var __this, var kind_) {
	__poke(prep_kind__, kind_);
	return 0;
}
var Aclass__prepare_type(var __this, var type_) {
	__poke(prep_type__, type_);
	return 0;
}
var Aclass__prepare_type_identifier(var __this, var id_) {
	__poke(prep_type__, DEF__Aclass__Cidentifier);
	__poke(prep_type_id__, id_);
	return 0;
}
var Aclass__prepare_set_name(var __this, var id_) {
	__poke(prep_name__, id_);
	return 0;
}
var Aclass__valid_member_name(var __this) {
	if (((__peek(prep_kind__))==(DEF__Aclass__Cfield))) {
	} else {
		if (((__peek(prep_kind__))==(DEF__Aclass__Cstatic))) {
		} else {
		}
	}
	__poke(member__, Amember__new(__peek(prep_kind__), __peek(prep_type__), __peek(prep_type_id__), __peek(prep_name__)));
	hash__add(__peek(members__), Atoken__get_data(__peek(prep_name__)), __peek(member__));
	return 0;
}
var Aclass__finish_const(var __this, var initialiser_) {
	return 0;
}
var Aclass__finish_subroutine(var __this) {
	return 0;
}
var Aclass__finish_param(var __this) {
	return 0;
}
var Aclass__start_param_list(var __this) {
	return 0;
}
var Aclass__dump(var __this, var depth) {
	var s;
	if (((__this)==(0))) {
		return 0;
	}

	if (((__peek(tok__))!=(0))) {
		s = Atoken__get_data(__peek(tok__));
	} else {
		s = Memory__getString(Aclass___str1);
	}
	Aclass__pad(__this, depth);
	console__log_int(__this);
	console__log_str(Memory__getString(Aclass___str2));
	console__log(s);
	Aclass__pad(__this, depth);
	console__log(Memory__getString(Aclass___str3));
	if (((__peek(children__))!=(0))) {
		Aterm__dump(__peek(children__), depth+1);
	}

	return 0;
}
#undef tok__
#undef next__
#undef children__
#undef current__
#undef parenthesis__
#undef operation__
#undef prep_kind__
#undef prep_type__
#undef prep_type_id__
#undef prep_name__
#undef members__
#undef member__
#endif

#ifdef JACK_IMPLEMENTATION
var Aparser___str0[] = {102,111,117,110,100,32,39,0};
var Aparser___str1[] = {39,32,97,116,32,108,105,110,101,40,0};
var Aparser___str2[] = {41,58,32,0};
var Aparser___str3[] = {99,108,97,115,115,0};
var Aparser___str4[] = {101,120,112,101,99,116,105,110,103,32,39,99,108,97,115,115,39,32,107,101,121,119,111,114,100,0};
var Aparser___str5[] = {101,120,112,101,99,116,105,110,103,32,105,100,101,110,116,105,102,105,101,114,0};
var Aparser___str6[] = {123,0};
var Aparser___str7[] = {101,120,112,101,99,116,105,110,103,32,39,123,39,0};
var Aparser___str8[] = {125,0};
var Aparser___str9[] = {101,120,112,101,99,116,105,110,103,32,39,125,39,0};
var Aparser___str10[] = {102,105,101,108,100,0};
var Aparser___str11[] = {115,116,97,116,105,99,0};
var Aparser___str12[] = {44,0};
var Aparser___str13[] = {59,0};
var Aparser___str14[] = {39,59,39,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str15[] = {78,97,109,101,32,111,102,32,118,97,114,105,97,98,108,101,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str16[] = {105,110,116,0};
var Aparser___str17[] = {99,104,97,114,0};
var Aparser___str18[] = {84,121,112,101,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str19[] = {99,111,110,115,116,0};
var Aparser___str20[] = {58,61,0};
var Aparser___str21[] = {39,58,61,39,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str22[] = {59,0};
var Aparser___str23[] = {69,120,112,101,99,116,101,100,32,99,111,110,115,116,97,110,116,32,105,110,105,116,105,97,108,105,115,101,114,46,0};
var Aparser___str24[] = {59,0};
var Aparser___str25[] = {39,59,39,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str26[] = {99,111,110,115,116,114,117,99,116,111,114,0};
var Aparser___str27[] = {102,117,110,99,116,105,111,110,0};
var Aparser___str28[] = {109,101,116,104,111,100,0};
var Aparser___str29[] = {118,105,114,116,117,97,108,0};
var Aparser___str30[] = {118,111,105,100,0};
var Aparser___str31[] = {40,0};
var Aparser___str32[] = {39,40,39,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str33[] = {41,0};
var Aparser___str34[] = {39,41,39,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str35[] = {41,0};
var Aparser___str36[] = {44,0};
var Aparser___str37[] = {105,110,0};
var Aparser___str38[] = {111,117,116,0};
var Aparser___str39[] = {105,111,0};
var Aparser___str40[] = {69,120,112,101,99,116,101,100,32,39,105,110,47,111,117,116,47,105,111,47,39,46,0};
var Aparser___str41[] = {123,0};
var Aparser___str42[] = {39,123,39,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str43[] = {125,0};
var Aparser___str44[] = {39,125,39,32,101,120,112,101,99,116,101,100,32,97,116,32,101,110,100,32,111,102,32,115,117,98,114,111,117,116,105,110,101,32,98,111,100,121,46,0};
var Aparser___str45[] = {118,97,114,0};
var Aparser___str46[] = {99,108,97,115,115,32,110,97,109,101,32,111,114,32,118,97,114,105,97,98,108,101,32,116,121,112,101,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str47[] = {118,97,114,105,97,98,108,101,32,110,97,109,101,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str48[] = {59,0};
var Aparser___str49[] = {39,59,39,32,101,120,112,101,99,116,101,100,32,97,116,32,101,110,100,32,111,102,32,118,97,114,105,97,98,108,101,32,100,101,99,108,97,114,97,116,105,111,110,0};
var Aparser___str50[] = {98,114,101,97,107,0};
var Aparser___str51[] = {59,0};
var Aparser___str52[] = {39,59,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,98,114,101,97,107,0};
var Aparser___str53[] = {105,102,0};
var Aparser___str54[] = {40,0};
var Aparser___str55[] = {39,40,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,105,102,46,0};
var Aparser___str56[] = {41,0};
var Aparser___str57[] = {39,41,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,105,102,32,99,111,110,100,105,116,105,111,110,46,0};
var Aparser___str58[] = {123,0};
var Aparser___str59[] = {39,123,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,105,102,32,40,41,46,0};
var Aparser___str60[] = {125,0};
var Aparser___str61[] = {39,125,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,105,102,32,98,111,100,121,46,0};
var Aparser___str62[] = {101,108,115,101,0};
var Aparser___str63[] = {123,0};
var Aparser___str64[] = {39,123,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,101,108,115,101,46,0};
var Aparser___str65[] = {125,0};
var Aparser___str66[] = {39,125,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,101,108,115,101,32,98,111,100,121,46,0};
var Aparser___str67[] = {119,104,105,108,101,0};
var Aparser___str68[] = {40,0};
var Aparser___str69[] = {39,40,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,119,104,105,108,101,46,0};
var Aparser___str70[] = {41,0};
var Aparser___str71[] = {39,41,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,119,104,105,108,101,32,99,111,110,100,105,116,105,111,110,46,0};
var Aparser___str72[] = {123,0};
var Aparser___str73[] = {39,123,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,119,104,105,108,101,32,40,41,46,0};
var Aparser___str74[] = {125,0};
var Aparser___str75[] = {39,125,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,119,104,105,108,101,32,98,111,100,121,46,0};
var Aparser___str76[] = {114,101,116,117,114,110,0};
var Aparser___str77[] = {59,0};
var Aparser___str78[] = {59,0};
var Aparser___str79[] = {39,59,39,32,101,120,112,101,99,116,101,100,0};
var Aparser___str80[] = {58,61,0};
var Aparser___str81[] = {91,0};
var Aparser___str82[] = {125,0};
var Aparser___str83[] = {58,61,0};
var Aparser___str84[] = {91,0};
var Aparser___str85[] = {59,0};
var Aparser___str86[] = {39,59,39,32,101,120,112,101,99,116,101,100,32,97,116,32,101,110,100,32,111,102,32,108,101,116,32,115,116,97,116,101,109,101,110,116,0};
var Aparser___str87[] = {93,0};
var Aparser___str88[] = {39,93,39,32,101,120,112,101,99,116,101,100,32,105,110,32,108,101,102,116,32,115,105,100,101,32,111,102,32,108,101,116,32,115,116,97,116,101,109,101,110,116,0};
var Aparser___str89[] = {58,61,0};
var Aparser___str90[] = {39,58,61,39,32,101,120,112,101,99,116,101,100,32,105,110,32,108,101,116,32,115,116,97,116,101,109,101,110,116,0};
var Aparser___str91[] = {59,0};
var Aparser___str92[] = {39,59,39,32,101,120,112,101,99,116,101,100,32,97,116,32,101,110,100,32,111,102,32,100,111,32,115,116,97,116,101,109,101,110,116,0};
var Aparser___str93[] = {61,61,0};
var Aparser___str94[] = {33,61,0};
var Aparser___str95[] = {62,61,0};
var Aparser___str96[] = {60,61,0};
var Aparser___str97[] = {62,0};
var Aparser___str98[] = {60,0};
var Aparser___str99[] = {99,111,109,112,97,114,97,105,115,111,110,32,111,112,101,114,116,97,111,114,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str100[] = {38,38,0};
var Aparser___str101[] = {124,124,0};
var Aparser___str102[] = {43,0};
var Aparser___str103[] = {45,0};
var Aparser___str104[] = {42,0};
var Aparser___str105[] = {47,0};
var Aparser___str106[] = {37,0};
var Aparser___str107[] = {33,0};
var Aparser___str108[] = {40,0};
var Aparser___str109[] = {39,40,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,39,33,39,46,0};
var Aparser___str110[] = {41,0};
var Aparser___str111[] = {109,105,115,115,105,110,103,32,39,41,39,32,105,110,32,98,111,111,108,32,116,101,114,109,46,0};
var Aparser___str112[] = {116,104,105,115,0};
var Aparser___str113[] = {110,117,108,108,0};
var Aparser___str114[] = {91,0};
var Aparser___str115[] = {46,36,0};
var Aparser___str116[] = {99,111,110,115,116,97,110,116,32,110,97,109,101,32,101,120,112,101,99,116,101,100,46,0};
var Aparser___str117[] = {45,0};
var Aparser___str118[] = {43,0};
var Aparser___str119[] = {40,0};
var Aparser___str120[] = {117,110,101,120,112,101,99,116,101,100,32,116,101,114,109,0};
var Aparser___str121[] = {40,0};
var Aparser___str122[] = {46,0};
var Aparser___str123[] = {41,0};
var Aparser___str124[] = {39,41,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,116,101,114,109,0};
var Aparser___str125[] = {93,0};
var Aparser___str126[] = {39,93,39,32,101,120,112,101,99,116,101,100,32,97,102,116,101,114,32,116,101,114,109,0};
var Aparser___str127[] = {40,0};
var Aparser___str128[] = {39,40,39,32,101,120,112,101,99,116,101,100,32,105,110,32,115,117,98,114,111,117,116,105,110,101,32,99,97,108,108,46,0};
var Aparser___str129[] = {41,0};
var Aparser___str130[] = {41,0};
var Aparser___str131[] = {39,41,39,32,101,120,112,101,99,116,101,100,32,97,116,32,101,110,100,32,111,102,32,115,117,98,114,111,117,116,114,105,110,101,32,99,97,108,108,0};
var Aparser___str132[] = {44,0};
var Aparser___str133[] = {44,0};
var Aparser___str134[] = {117,110,101,120,112,101,99,116,101,100,32,115,116,97,116,101,0};
#define _states__ (__this+0)
#define lex__ (__this+1)
#define lookahead__ (__this+2)
#define lookstring__ (__this+3)
#define status__ (__this+4)
#define debug__ (__this+5)
#define _class__ (__this+6)
var Aparser__new() {
	var __this;
	__this = Memory__alloc(7);
	__poke(debug__, 0);
	__poke(status__, 0);
	__poke(lex__, 0);
	__poke(_states__, buffer__new(8));
	__poke(_class__, 0);
	Aparser__push(__this, DEF__Aparser__Croot);
	return __this;
}
var Aparser__dispose(var __this) {
	buffer__dispose(__peek(_states__));
	std__free(__this);
	return 0;
}
var Aparser__get_data(var __this) {
	return __peek(lookstring__);
}
var Aparser__get_next(var __this) {
	return __peek(_class__);
}
var Aparser__parse(var __this, var lexer_) {
	__poke(lex__, lexer_);
	while (((Alexer__empty(__peek(lex__)))==(0))) {
		__poke(lookahead__, Alexer__get_at(__peek(lex__), 0));
		__poke(lookstring__, Atoken__get_data(__peek(lookahead__)));
		if ((((Atoken__get_type(__peek(lookahead__)))==(DEF__Alexer__Cnewline)))||(((Atoken__get_type(__peek(lookahead__)))==(DEF__Alexer__Ccomment)))) {
			Aparser__eat(__this);
		} else {
			Aparser__state_machine(__this);
		}
		if (((Atoken__get_type(__peek(lookahead__)))==(DEF__Alexer__Cend))) {
			return 0;
		}

	}
	return 0;
}
var Aparser__error(var __this, var e) {
	console__log_str(Memory__getString(Aparser___str0));
	console__log_str(Atoken__get_data(__peek(lookahead__)));
	console__log_str(Memory__getString(Aparser___str1));
	console__log_int(Atoken__get_line(__peek(lookahead__)));
	console__log_str(Memory__getString(Aparser___str2));
	console__log(e);
	std__exit(-1);
	__poke(status__, -1);
	return 0;
}
var Aparser__push(var __this, var step_) {
	buffer__push(__peek(_states__), step_);
	return 0;
}
var Aparser__pop(var __this) {
	buffer__pop(__peek(_states__));
	return 0;
}
var Aparser__root(var __this) {
	if (((__peek(status__))!=(0))) {
		return -1;
	}

	Aparser__push(__this, DEF__Aparser__Cclass_dec);
	return 0;
}
var Aparser__class_dec(var __this) {
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str3)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str4));
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_id(__this, 0))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str5));
		return 0;
	}

	__poke(_class__, Aclass__new(__peek(lookahead__)));
	Aparser__eat(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str6)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str7));
		return 0;
	}

	Aparser__eat(__this);
	while (((__peek(status__))>=(0))) {
		Aparser__class_var_dec(__this);
	}
	__poke(status__, 0);
	while (((__peek(status__))>=(0))) {
		Aparser__clas_const_dec(__this);
	}
	__poke(status__, 0);
	Aparser__push(__this, DEF__Aparser__Cclass_dec1);
	Aparser__push(__this, DEF__Aparser__Csubroutine_dec);
	return 0;
}
var Aparser__class_dec1(var __this) {
	__poke(status__, 0);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str8)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str9));
		return 0;
	}

	Aparser__eat(__this);
	Aparser__pop(__this);
	return 0;
}
var Aparser__class_var_dec(var __this) {
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str10)))!=(0))) {
		Aclass__prepare_kind(__peek(_class__), DEF__Aclass__Cfield);
	} else {
		if (((Aparser__match_id(__this, Memory__getString(Aparser___str11)))!=(0))) {
			Aclass__prepare_kind(__peek(_class__), DEF__Aclass__Cstatic);
		} else {
			__poke(status__, -1);
			return 0;
		}
	}
	Aparser__eat(__this);
	Aparser__type(__this);
	Aparser__var_name(__this);
	while (((Aparser__match_op(__this, Memory__getString(Aparser___str12)))!=(0))) {
		Aclass__valid_member_name(__peek(_class__));
		Aparser__var_name(__this);
	}
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str13)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str14));
		return 0;
	}

	Aclass__valid_member_name(__peek(_class__));
	Aparser__eat(__this);
	return 0;
}
var Aparser__var_name(var __this) {
	if (((Aparser__match_id(__this, 0))!=(0))) {
		Aclass__prepare_set_name(__peek(_class__), __peek(lookahead__));
		Aparser__eat(__this);
		return 0;
	}

	Aparser__error(__this, Memory__getString(Aparser___str15));
	return 0;
}
var Aparser__type(var __this) {
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str16)))!=(0))) {
		Aclass__prepare_type(__peek(_class__), DEF__Aclass__Cint);
	} else {
		if (((Aparser__match_id(__this, Memory__getString(Aparser___str17)))!=(0))) {
			Aclass__prepare_type(__peek(_class__), DEF__Aclass__Cchar);
		} else {
			if (((Aparser__match_id(__this, 0))!=(0))) {
				Aclass__prepare_type_identifier(__peek(_class__), __peek(lookahead__));
			} else {
				Aparser__error(__this, Memory__getString(Aparser___str18));
				return 0;
			}
		}
	}
	Aparser__eat(__this);
	return 0;
}
var Aparser__clas_const_dec(var __this) {
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str19)))!=(0))) {
		Aclass__prepare_kind(__peek(_class__), DEF__Aclass__Cconst);
	} else {
		__poke(status__, -1);
		return 0;
	}
	Aparser__eat(__this);
	Aparser__type(__this);
	Aparser__var_name(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str20)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str21));
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str22)))==(0))) {
		Aclass__finish_const(__peek(_class__), __peek(lookahead__));
	} else {
		Aparser__error(__this, Memory__getString(Aparser___str23));
		return 0;
	}
	Aparser__eat(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str24)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str25));
		return 0;
	}

	Aparser__eat(__this);
	return 0;
}
var Aparser__subroutine_dec(var __this) {
	if (((__peek(status__))!=(0))) {
		Aparser__pop(__this);
		return 0;
	}

	if (((Aparser__match_id(__this, Memory__getString(Aparser___str26)))!=(0))) {
		Aclass__prepare_kind(__peek(_class__), DEF__Aclass__Cconstructor);
	} else {
		if (((Aparser__match_id(__this, Memory__getString(Aparser___str27)))!=(0))) {
			Aclass__prepare_kind(__peek(_class__), DEF__Aclass__Cfunction);
		} else {
			if (((Aparser__match_id(__this, Memory__getString(Aparser___str28)))!=(0))) {
				Aclass__prepare_kind(__peek(_class__), DEF__Aclass__Cmethod);
			} else {
				if (((Aparser__match_id(__this, Memory__getString(Aparser___str29)))!=(0))) {
					Aclass__prepare_kind(__peek(_class__), DEF__Aclass__Cvirtual);
				} else {
					Aparser__pop(__this);
					__poke(status__, -1);
					return 0;
				}
			}
		}
	}
	Aparser__eat(__this);
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str30)))!=(0))) {
		Aclass__prepare_type(__peek(_class__), DEF__Aclass__Cvoid);
		Aparser__eat(__this);
	} else {
		Aparser__type(__this);
	}
	Aparser__var_name(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str31)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str32));
		return 0;
	}

	Aparser__eat(__this);
	Aparser__param_list(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str33)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str34));
		return 0;
	}

	Aparser__eat(__this);
	Aparser__subrout_body(__this);
	return 0;
}
var Aparser__param_list(var __this) {
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str35)))!=(0))) {
		return 0;
	}

	Aclass__start_param_list(__peek(_class__));
	Aparser__direction(__this);
	Aparser__type(__this);
	Aparser__var_name(__this);
	while (((Aparser__match_op(__this, Memory__getString(Aparser___str36)))!=(0))) {
		Aclass__finish_param(__peek(_class__));
		Aparser__eat(__this);
		Aparser__direction(__this);
		Aparser__type(__this);
		Aparser__var_name(__this);
	}
	Aclass__finish_param(__peek(_class__));
	return 0;
}
var Aparser__direction(var __this) {
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str37)))!=(0))) {
		Aparser__eat(__this);
		return 0;
	} else {
		if (((Aparser__match_id(__this, Memory__getString(Aparser___str38)))!=(0))) {
			Aparser__eat(__this);
			return 0;
		} else {
			if (((Aparser__match_id(__this, Memory__getString(Aparser___str39)))!=(0))) {
				Aparser__eat(__this);
				return 0;
			}

		}
	}
	Aparser__error(__this, Memory__getString(Aparser___str40));
	return 0;
}
var Aparser__subrout_body(var __this) {
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str41)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str42));
		return 0;
	}

	Aparser__eat(__this);
	while (((__peek(status__))==(0))) {
		Aparser__var_dec(__this);
	}
	__poke(status__, 0);
	Aparser__push(__this, DEF__Aparser__Csubrout_body1);
	Aparser__push(__this, DEF__Aparser__Cstatements);
	return 0;
}
var Aparser__subrout_body1(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str43)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str44));
		return 0;
	}

	Aparser__eat(__this);
	Aclass__finish_subroutine(__peek(_class__));
	return 0;
}
var Aparser__var_dec(var __this) {
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str45)))==(0))) {
		__poke(status__, 1);
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_id(__this, 0))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str46));
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_id(__this, 0))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str47));
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str48)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str49));
		return 0;
	}

	Aparser__eat(__this);
	return 0;
}
var Aparser__statements(var __this) {
	if (((__peek(status__))==(0))) {
		Aparser__push(__this, DEF__Aparser__Cstatement);
		return 0;
	}

	if (((__peek(status__))>(0))) {
		__poke(status__, 0);
	}

	Aparser__pop(__this);
	return 0;
}
var Aparser__statement(var __this) {
	var r;
	Aparser__pop(__this);
	r = 0;
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str50)))!=(0))) {
		r = 1;
		Aparser__eat(__this);
		if (((Aparser__match_op(__this, Memory__getString(Aparser___str51)))==(0))) {
			Aparser__error(__this, Memory__getString(Aparser___str52));
			return 0;
		}

		Aparser__eat(__this);
		return 0;
	}

	if (((r)==(0))) {
		r = Aparser__if_statem(__this);
	}

	if (((r)==(0))) {
		r = Aparser__while_statem(__this);
	}

	if (((r)==(0))) {
		r = Aparser__return_statem(__this);
	}

	if (((r)==(0))) {
		r = Aparser__dolet_statem(__this);
	}

	if (((r)==(0))) {
		__poke(status__, 1);
	}

	return 0;
}
var Aparser__if_statem(var __this) {
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str53)))==(0))) {
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str54)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str55));
		return 1;
	}

	Aparser__eat(__this);
	Aparser__push(__this, DEF__Aparser__Cif_statem1);
	Aparser__push(__this, DEF__Aparser__Cbool_expr);
	return 1;
}
var Aparser__if_statem1(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str56)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str57));
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str58)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str59));
		return 0;
	}

	Aparser__eat(__this);
	Aparser__push(__this, DEF__Aparser__Celse_statem);
	Aparser__push(__this, DEF__Aparser__Cstatements);
	return 0;
}
var Aparser__else_statem(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str60)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str61));
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str62)))==(0))) {
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__if_statem(__this))!=(0))) {
		return 0;
	}

	if (((Aparser__match_op(__this, Memory__getString(Aparser___str63)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str64));
		return 0;
	}

	Aparser__eat(__this);
	Aparser__push(__this, DEF__Aparser__Celse_statem1);
	Aparser__push(__this, DEF__Aparser__Cstatements);
	return 0;
}
var Aparser__else_statem1(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str65)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str66));
		return 0;
	}

	Aparser__eat(__this);
	return 0;
}
var Aparser__while_statem(var __this) {
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str67)))==(0))) {
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str68)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str69));
		return 1;
	}

	Aparser__eat(__this);
	Aparser__push(__this, DEF__Aparser__Cwhile_statem1);
	Aparser__push(__this, DEF__Aparser__Cexpression);
	return 1;
}
var Aparser__while_statem1(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str70)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str71));
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str72)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str73));
		return 0;
	}

	Aparser__eat(__this);
	Aparser__push(__this, DEF__Aparser__Cwhile_statem2);
	Aparser__push(__this, DEF__Aparser__Cstatements);
	return 0;
}
var Aparser__while_statem2(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str74)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str75));
		return 0;
	}

	Aparser__eat(__this);
	return 0;
}
var Aparser__return_statem(var __this) {
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str76)))==(0))) {
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str77)))!=(0))) {
		Aparser__eat(__this);
	} else {
		Aparser__push(__this, DEF__Aparser__Creturn_statem1);
		Aparser__push(__this, DEF__Aparser__Cexpression);
	}
	return 1;
}
var Aparser__return_statem1(var __this) {
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str78)))!=(0))) {
		Aparser__eat(__this);
		Aparser__pop(__this);
		return 0;
	}

	Aparser__error(__this, Memory__getString(Aparser___str79));
	return 0;
}
var Aparser__dolet_statem(var __this) {
	var id;
	if (((Aparser__match_id(__this, 0))==(0))) {
		return 0;
	}

	id = __peek(lookahead__);
	Aparser__eat(__this);
	if ((((Aparser__match_op(__this, Memory__getString(Aparser___str80)))!=(0)))||(((Aparser__match_op(__this, Memory__getString(Aparser___str81)))!=(0)))) {
		return Aparser__let_statem(__this, id);
	} else {
		if (((Aparser__match_op(__this, Memory__getString(Aparser___str82)))==(0))) {
			return Aparser__do_statem(__this, id);
		}

	}
	return 0;
}
var Aparser__let_statem(var __this, var id) {
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str83)))!=(0))) {
		Aparser__eat(__this);
		Aparser__push(__this, DEF__Aparser__Clet_statem1);
		Aparser__push(__this, DEF__Aparser__Cexpression);
		return 1;
	} else {
		if (((Aparser__match_op(__this, Memory__getString(Aparser___str84)))!=(0))) {
			Aparser__eat(__this);
			Aparser__push(__this, DEF__Aparser__Clet_statem2);
			Aparser__push(__this, DEF__Aparser__Cexpression);
			return 1;
		}

	}
	return 0;
}
var Aparser__let_statem1(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str85)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str86));
		return 0;
	}

	Aparser__eat(__this);
	return 0;
}
var Aparser__let_statem2(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str87)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str88));
		return 0;
	}

	Aparser__eat(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str89)))!=(0))) {
		Aparser__eat(__this);
		Aparser__push(__this, DEF__Aparser__Clet_statem1);
		Aparser__push(__this, DEF__Aparser__Cexpression);
		return 0;
	}

	Aparser__error(__this, Memory__getString(Aparser___str90));
	return 0;
}
var Aparser__do_statem(var __this, var id) {
	Aparser__push(__this, DEF__Aparser__Cdo_statem1);
	return Aparser__subrout_call(__this, id);
}
var Aparser__do_statem1(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str91)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str92));
		return 0;
	}

	Aparser__eat(__this);
	return 0;
}
var Aparser__bool_expr(var __this) {
	Aparser__pop(__this);
	Aparser__push(__this, DEF__Aparser__Cbool_expr1);
	Aparser__push(__this, DEF__Aparser__Cbool_term);
	return 0;
}
var Aparser__bool_expr1(var __this) {
	if (((Aparser__bool_op(__this))!=(0))) {
		Aparser__push(__this, DEF__Aparser__Cbool_term);
		return 0;
	} else {
		Aparser__pop(__this);
	}
	return 0;
}
var Aparser__expression(var __this) {
	Aparser__pop(__this);
	Aparser__push(__this, DEF__Aparser__Cexpression1);
	Aparser__push(__this, DEF__Aparser__Cterm);
	return 0;
}
var Aparser__expression1(var __this) {
	if (((Aparser__op(__this))!=(0))) {
		Aparser__push(__this, DEF__Aparser__Cterm);
		return 0;
	} else {
		Aparser__pop(__this);
	}
	return 0;
}
var Aparser__comp_op(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str93)))!=(0))) {
	} else {
		if (((Aparser__match_op(__this, Memory__getString(Aparser___str94)))!=(0))) {
		} else {
			if (((Aparser__match_op(__this, Memory__getString(Aparser___str95)))!=(0))) {
			} else {
				if (((Aparser__match_op(__this, Memory__getString(Aparser___str96)))!=(0))) {
				} else {
					if (((Aparser__match_op(__this, Memory__getString(Aparser___str97)))!=(0))) {
					} else {
						if (((Aparser__match_op(__this, Memory__getString(Aparser___str98)))!=(0))) {
						} else {
							Aparser__error(__this, Memory__getString(Aparser___str99));
							return 0;
						}
					}
				}
			}
		}
	}
	Aparser__eat(__this);
	return 0;
}
var Aparser__bool_op(var __this) {
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str100)))!=(0))) {
	} else {
		if (((Aparser__match_op(__this, Memory__getString(Aparser___str101)))!=(0))) {
		} else {
			return 0;
		}
	}
	Aparser__eat(__this);
	return 1;
}
var Aparser__op(var __this) {
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str102)))!=(0))) {
	} else {
		if (((Aparser__match_op(__this, Memory__getString(Aparser___str103)))!=(0))) {
		} else {
			if (((Aparser__match_op(__this, Memory__getString(Aparser___str104)))!=(0))) {
			} else {
				if (((Aparser__match_op(__this, Memory__getString(Aparser___str105)))!=(0))) {
				} else {
					if (((Aparser__match_op(__this, Memory__getString(Aparser___str106)))!=(0))) {
					} else {
						return 0;
					}
				}
			}
		}
	}
	Aparser__eat(__this);
	return 1;
}
var Aparser__bool_term(var __this) {
	var not;
	Aparser__pop(__this);
	not = 0;
	if (Aparser__match_op(__this, Memory__getString(Aparser___str107))) {
		Aparser__eat(__this);
		not = 1;
	}

	if (((Aparser__match_op(__this, Memory__getString(Aparser___str108)))!=(0))) {
		Aparser__eat(__this);
		Aparser__push(__this, DEF__Aparser__Cbool_term1);
		Aparser__push(__this, DEF__Aparser__Cbool_expr);
		return 0;
	} else {
		if (((not)!=(0))) {
			Aparser__error(__this, Memory__getString(Aparser___str109));
			return 0;
		}

	}
	Aparser__push(__this, DEF__Aparser__Cexpression);
	Aparser__push(__this, DEF__Aparser__Ccomp_op);
	Aparser__push(__this, DEF__Aparser__Cexpression);
	return 0;
}
var Aparser__bool_term1(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str110)))!=(0))) {
		Aparser__eat(__this);
		return 0;
	}

	Aparser__error(__this, Memory__getString(Aparser___str111));
	return 0;
}
var Aparser__term(var __this) {
	var id;
	Aparser__pop(__this);
	if (((Aparser__match_id(__this, Memory__getString(Aparser___str112)))!=(0))) {
		Aparser__eat(__this);
	} else {
		if (((Aparser__match_id(__this, Memory__getString(Aparser___str113)))!=(0))) {
			Aparser__eat(__this);
		} else {
			if (((Atoken__get_type(__peek(lookahead__)))==(DEF__Alexer__Cidentifier))) {
				id = __peek(lookahead__);
				Aparser__eat(__this);
				if (((Aparser__match_op(__this, Memory__getString(Aparser___str114)))!=(0))) {
					Aparser__eat(__this);
					Aparser__push(__this, DEF__Aparser__Cterm2);
					Aparser__push(__this, DEF__Aparser__Cexpression);
				} else {
					if (((Aparser__subrout_call(__this, id))!=(0))) {
					} else {
						if (((Aparser__match_op(__this, Memory__getString(Aparser___str115)))!=(0))) {
							Aparser__eat(__this);
							if (((Atoken__get_type(__peek(lookahead__)))!=(DEF__Alexer__Cidentifier))) {
								Aparser__error(__this, Memory__getString(Aparser___str116));
								return 0;
							}

							Aparser__eat(__this);
						} else {
							id = id;
						}
					}
				}
			} else {
				if (((Atoken__get_type(__peek(lookahead__)))==(DEF__Alexer__Cquote))) {
					Aparser__eat(__this);
				} else {
					if (((Atoken__get_type(__peek(lookahead__)))==(DEF__Alexer__Cstring))) {
						Aparser__eat(__this);
					} else {
						if (((Atoken__get_type(__peek(lookahead__)))==(DEF__Alexer__Cnumber))) {
							Aparser__eat(__this);
						} else {
							if (((Aparser__match_op(__this, Memory__getString(Aparser___str117)))!=(0))) {
								Aparser__eat(__this);
								Aparser__push(__this, DEF__Aparser__Cterm);
							} else {
								if (((Aparser__match_op(__this, Memory__getString(Aparser___str118)))!=(0))) {
									Aparser__eat(__this);
									Aparser__push(__this, DEF__Aparser__Cterm);
								} else {
									if (((Aparser__match_op(__this, Memory__getString(Aparser___str119)))!=(0))) {
										Aparser__eat(__this);
										Aparser__push(__this, DEF__Aparser__Cterm1);
										Aparser__push(__this, DEF__Aparser__Cexpression);
									} else {
										Aparser__error(__this, Memory__getString(Aparser___str120));
										return 0;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
var Aparser__subrout_call(var __this, var id) {
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str121)))!=(0))) {
		Aparser__sub_call(__this, id);
		return 1;
	} else {
		if (((Aparser__match_op(__this, Memory__getString(Aparser___str122)))!=(0))) {
			id = id;
			Aparser__eat(__this);
			id = __peek(lookahead__);
			Aparser__eat(__this);
			Aparser__sub_call(__this, id);
			return 1;
		}

	}
	return 0;
}
var Aparser__term1(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str123)))!=(0))) {
		Aparser__eat(__this);
		return 0;
	}

	Aparser__error(__this, Memory__getString(Aparser___str124));
	return 0;
}
var Aparser__term2(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str125)))!=(0))) {
		Aparser__eat(__this);
		return 0;
	}

	Aparser__error(__this, Memory__getString(Aparser___str126));
	return 0;
}
var Aparser__sub_call(var __this, var id) {
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str127)))==(0))) {
		Aparser__error(__this, Memory__getString(Aparser___str128));
		return 0;
	}

	Aparser__eat(__this);
	Aparser__push(__this, DEF__Aparser__Csub_call1);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str129)))==(0))) {
		Aparser__push(__this, DEF__Aparser__Cexpr_list);
		Aparser__push(__this, DEF__Aparser__Cexpression);
		return 0;
	}

	return 0;
}
var Aparser__sub_call1(var __this) {
	Aparser__pop(__this);
	if (((Aparser__match_op(__this, Memory__getString(Aparser___str130)))!=(0))) {
		Aparser__eat(__this);
		return 0;
	}

	Aparser__error(__this, Memory__getString(Aparser___str131));
	return 0;
}
var Aparser__expr_list(var __this) {
	Aparser__pop(__this);
	if (((__peek(status__))!=(0))) {
		__poke(status__, 0);
		return 0;
	}

	if (((Aparser__match_op(__this, Memory__getString(Aparser___str132)))!=(0))) {
		Aparser__eat(__this);
		Aparser__push(__this, DEF__Aparser__Cexpr_list1);
		Aparser__push(__this, DEF__Aparser__Cexpression);
	}

	return 0;
}
var Aparser__expr_list1(var __this) {
	Aparser__pop(__this);
	if (((__peek(status__))!=(0))) {
		return 0;
	}

	if (((Aparser__match_op(__this, Memory__getString(Aparser___str133)))!=(0))) {
		Aparser__eat(__this);
		Aparser__push(__this, DEF__Aparser__Cexpr_list1);
		Aparser__push(__this, DEF__Aparser__Cexpression);
	}

	return 0;
}
var Aparser__eat(var __this) {
	Alexer__shift(__peek(lex__));
	__poke(lookahead__, Alexer__get_at(__peek(lex__), 0));
	while ((((Atoken__get_type(__peek(lookahead__)))==(DEF__Alexer__Cnewline)))||(((Atoken__get_type(__peek(lookahead__)))==(DEF__Alexer__Ccomment)))) {
		Alexer__shift(__peek(lex__));
		__poke(lookahead__, Alexer__get_at(__peek(lex__), 0));
	}
	__poke(lookstring__, Atoken__get_data(__peek(lookahead__)));
	return 0;
}
var Aparser__match_id(var __this, var id) {
	if (((Atoken__get_type(__peek(lookahead__)))!=(DEF__Alexer__Cidentifier))) {
		return 0;
	}

	if (((id)==(0))) {
		return 1;
	}

	if (((string__compare(__peek(lookstring__), id))==(0))) {
		return 1;
	}

	return 0;
}
var Aparser__match_op(var __this, var id) {
	if (((Atoken__get_type(__peek(lookahead__)))!=(DEF__Alexer__Coperator))) {
		return 0;
	}

	if (((string__compare(__peek(lookstring__), id))==(0))) {
		return 1;
	}

	return 0;
}
var Aparser__match_newline(var __this) {
	if (((Atoken__get_type(__peek(lookahead__)))==(DEF__Alexer__Cnewline))) {
		return 1;
	}

	return 0;
}
var Aparser__match_str(var __this, var id) {
	var t;
	t = Atoken__get_type(__peek(lookahead__));
	if ((((t)!=(DEF__Alexer__Cstring)))&&(((t)!=(DEF__Alexer__Cquote)))) {
		return 0;
	}

	if ((((id)==(0)))||(((string__compare(__peek(lookstring__), id))==(0)))) {
		return 1;
	}

	return 0;
}
var Aparser__state_machine(var __this) {
	var state;
	state = buffer__get_last(__peek(_states__));
	if (((__peek(debug__))>(0))) {
		console__log(__peek(lookstring__));
		console__log_int(state);
	}

	if (((state)==(DEF__Aparser__Croot))) {
		Aparser__root(__this);
	} else {
		if (((state)==(DEF__Aparser__Cclass_dec))) {
			Aparser__class_dec(__this);
		} else {
			if (((state)==(DEF__Aparser__Cstatement))) {
				Aparser__statement(__this);
			} else {
				if (((state)==(DEF__Aparser__Cstatements))) {
					Aparser__statements(__this);
				} else {
					if (((state)==(DEF__Aparser__Cexpression))) {
						Aparser__expression(__this);
					} else {
						if (((state)==(DEF__Aparser__Cexpression1))) {
							Aparser__expression1(__this);
						} else {
							if (((state)==(DEF__Aparser__Cterm))) {
								Aparser__term(__this);
							} else {
								if (((state)==(DEF__Aparser__Cterm1))) {
									Aparser__term1(__this);
								} else {
									if (((state)==(DEF__Aparser__Cterm2))) {
										Aparser__term2(__this);
									} else {
										if (((state)==(DEF__Aparser__Creturn_statem1))) {
											Aparser__return_statem1(__this);
										} else {
											if (((state)==(DEF__Aparser__Cexpr_list))) {
												Aparser__expr_list(__this);
											} else {
												if (((state)==(DEF__Aparser__Cexpr_list1))) {
													Aparser__expr_list1(__this);
												} else {
													if (((state)==(DEF__Aparser__Csub_call1))) {
														Aparser__sub_call1(__this);
													} else {
														if (((state)==(DEF__Aparser__Clet_statem1))) {
															Aparser__let_statem1(__this);
														} else {
															if (((state)==(DEF__Aparser__Clet_statem2))) {
																Aparser__let_statem2(__this);
															} else {
																if (((state)==(DEF__Aparser__Cdo_statem1))) {
																	Aparser__do_statem1(__this);
																} else {
																	if (((state)==(DEF__Aparser__Cwhile_statem1))) {
																		Aparser__while_statem1(__this);
																	} else {
																		if (((state)==(DEF__Aparser__Cwhile_statem2))) {
																			Aparser__while_statem2(__this);
																		} else {
																			if (((state)==(DEF__Aparser__Csubrout_body1))) {
																				Aparser__subrout_body1(__this);
																			} else {
																				if (((state)==(DEF__Aparser__Csubroutine_dec))) {
																					Aparser__subroutine_dec(__this);
																				} else {
																					if (((state)==(DEF__Aparser__Cclass_dec1))) {
																						Aparser__class_dec1(__this);
																					} else {
																						if (((state)==(DEF__Aparser__Cif_statem1))) {
																							Aparser__if_statem1(__this);
																						} else {
																							if (((state)==(DEF__Aparser__Celse_statem))) {
																								Aparser__else_statem(__this);
																							} else {
																								if (((state)==(DEF__Aparser__Celse_statem1))) {
																									Aparser__else_statem1(__this);
																								} else {
																									if (((state)==(DEF__Aparser__Cbool_expr))) {
																										Aparser__bool_expr(__this);
																									} else {
																										if (((state)==(DEF__Aparser__Cbool_expr1))) {
																											Aparser__bool_expr1(__this);
																										} else {
																											if (((state)==(DEF__Aparser__Cbool_term))) {
																												Aparser__bool_term(__this);
																											} else {
																												if (((state)==(DEF__Aparser__Cbool_term1))) {
																													Aparser__bool_term1(__this);
																												} else {
																													if (((state)==(DEF__Aparser__Ccomp_op))) {
																														Aparser__comp_op(__this);
																													} else {
																														Aparser__error(__this, Memory__getString(Aparser___str134));
																														Alexer__shift(__peek(lex__));
																														__poke(status__, -1);
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 1;
}
#undef _states__
#undef lex__
#undef lookahead__
#undef lookstring__
#undef status__
#undef debug__
#undef _class__
#endif

#ifdef JACK_IMPLEMENTATION
var Amember__new(var kind, var type, var type_id, var name) {
	var __this;
	__this = Memory__alloc(1);
	return __this;
}
var Amember__dispose(var __this) {
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
#endif

