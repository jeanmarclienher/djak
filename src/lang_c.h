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

#define var long
#define STR(s) ((long)(s + 2))
#define NEW(c) long __this; \
	__this = std__alloc(D__##c##___SIZE); \
	((long*)__this)[-1] = D__##c##___ID

var main__main(void);
var std__free(var mem);

