#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

void _putchar_c(char c)
{
	write(1, &c, 1);
}

int _putchar(va_list a)
{
  char c;
  int count = 1;
	c = va_arg(a, int);
	write(1, &c, 1);
	return (count);
}

int print_str(va_list a)
{
	char *c;
	int count = 0;

	c = va_arg(a, char *);
	while (*c != '\0')
	{
		_putchar_c(*c++);
		++count;
	}
	return (count);
}

int print_int(va_list a)
{
  int n, k;
  int count = 0;

  n = va_arg(a, int);
  
  prep_int(n);

  k = n;

  if (k < 0)
    {
      k = k * -1;
      ++count;
    }
  else if(k == 0)
    {
      ++count;
    }
  while (k != 0)
    {
      ++count;
      k = k / 10;
    }
  return (count);
}


/**
 * _printf - outputs according to a format.
 * @format: input string.
 * Return: number of characters printed,
 */

int _printf(char *format, ...)
{
	va_list a;
	int i, j, count;

	cs_t cspec[] = {
		{'c', _putchar},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int}
	};

	if (format == NULL)
		return (0);

	i = j = count = 0;
	va_start(a, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (j < 4)
			{
				if (format[i + 1] == cspec[j].cs &&
				    format[i + 1] != '%' && cspec[j].cs == 'c' && i == 0)
				{
					count = count + cspec[j].f(a);
					return (count);
					i++;
				}
				else if(format[i + 1] == cspec[j].cs &&
					format [i + 1] != '%')
				  {
				    count = count + cspec[j].f(a);
				    /*return (count);*/
				    i++;
				  }
				j++;
				
			}
			/*i++;*/
			/*_putchar_c(format[i]);*/
		}
		else
		  {
			_putchar_c(format[i]);
			count = count + 1;
		  }
		
		i++;

	}
	return (count);
}

