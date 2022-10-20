#include <stdlib.h>
#include <stdarg.h>

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

void _putchar_c(char c);
void _putchar(va_list a);
void print_str(va_list a);
int _printf(const char *format, ...);
void prep_int(int n);
void write_int(int n);

