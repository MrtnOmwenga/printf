#include <stdlib.h>
#include <stdarg.h>

typedef struct Cspecs {
	char cs;
	int (*f)();
} cs_t;

void _putchar_c(char c);
int _putchar(va_list a);
int print_str(va_list a);
int print_int(va_list a);
int _printf(char *format, ...);
void prep_int(int n);
void write_int(int n);
