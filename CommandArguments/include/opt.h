#ifndef _OPT_H
#define _OPT_H

#include <stdio.h>
#ifdef _WIN
    #include "getopt.h"
#else
    #include <getopt.h>
#endif

void use_getpot_long(int argc, char *argv[]);

#endif // _OPT_H