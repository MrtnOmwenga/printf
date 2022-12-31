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
		{'i', _int},
		{'b', _binary}
	};

	if (format == NULL)
	  return (0);

	i = j = count = 0;
	va_start(a, format);
	va_start(b, format);

	if (a == NULL)
	  {
	    return (0);
	  }
	
	while (format[i])
	{
	  if (format[i] == '%')
		{
		  if (format[i + 1] == '%')
		    {
		      _putchar('%');
		      i = i + 2;
		      count++;
		      continue;
		    }

		  if (va_arg(b, int) == (char)0 && format[i + 1] == 's')
		    {
		      print_null();
		      i = i + 2;
		      count = count + 6;
		      continue;
		    }
		  
		  for (j = 0; j <= 5; j++)
			{
			  if (j == 5)
			    {
			      _putchar('%');
			      count++;
			    }
			  if (format[i + 1] == cspec[j].cs)
			    {
			      count = count + cspec[j].f(a);
			      i++;
			      break;
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
