#include <stdlib.h>
#include <stdarg.h>

typedef struct Cspecs {
	char cs;
	void (*f)();
} cs_t;

void _putchar_c(char c);
void _putchar(va_list a);
void print_str(va_list a);
int _printf(const char *format, ...);
void prep_int(int n);
void write_int(int n);

