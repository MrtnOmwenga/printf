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

/*printf conversion specifier functions*/
int _char(va_list a);
int _str(va_list a);
int _int(va_list a);
int _binary(va_list a);
int _printf(char *format, ...);

/*utilities*/
void _putchar(char c);
void print_int(int n);
void print_min(int n);
void write_int(int n);
int count(int n);
void print_null();

#endif
