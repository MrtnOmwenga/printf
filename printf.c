#include "main.h"

int _int(va_list a)
{
  int n, k;
  int count = 0;

  n = va_arg(a, int);
  if (n == INT_MIN)
    {
      print_min(n);
    }
  else
    {
  print_int(n);
    }

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
		{'c', _char},
		{'s', _str},
		{'d', _int},
		{'i', _int}
	};

	if (format == NULL)
		return (0);

	i = j = count = 0;
	va_start(a, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
		  for (j = 0; j < 4; j++)
			{
				if (format[i + 1] == cspec[j].cs &&
				    format[i + 1] != '%')
				{
					count = count + cspec[j].f(a);
					i++;
				}
	       
			}
		}
		else
		  {
			putchar(format[i]);
			count++;
		  }
		
		i++;

	}
	return (count);
}

