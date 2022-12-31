#ifndef PRINTF
#define PRINTF

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

typedef struct Cspecs {
	char cs;
	int (*f)();
} cs_t;

int _char(va_list a);
int _str(va_list a);
int _int(va_list a);
int _printf(char *format, ...);
void print_int(int n);
void print_min(int n);
void write_int(int n);

#endif
