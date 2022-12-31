#include "main.h"

/**
 * _printf - outputs according to a format.
 * @format: input string.
 * Return: number of characters printed,
 */

int _printf(char *format, ...)
{
  va_list a, b;
	int i, j, count;

	cs_t cspec[] = {
		{'c', _char},
		{'s', _str},
		{'d', _int},
		{'i', _int}
	};

	if (format == NULL)
		return (0);

	i = j = count = 0;
	va_start(a, format);
	va_start(b, format);
	while (format[i])
	{
	  if (format[i] == '%')
		{
		  if (format[i + 1] == '%')
		    {
		      _putchar('%');
		      count++;
		    }

		  if (va_arg(b, int) == (char)0)
		    {
		      printf_null();
		      i++;
		      continue;
		    }
		  
		  for (j = 0; j < 4; j++)
			{
			  if (format[i + 1] == cspec[j].cs)
			    {
			      count = count + cspec[j].f(a);
			      i++;
			    }
	       
			}
		}
		else
		  {
			_putchar(format[i]);
			count++;
		  }
		
		i++;

	}
	return (count);
}

