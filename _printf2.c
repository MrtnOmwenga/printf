#include <stdio.h>
#include <stdarg.h>

/**
 *convert- Converts numbers
 *
 *@num: Number to be converted
 *@base: Base to be converted to
 *
 *Return: char *
 */

char *convert(unsigned int num, int base)
{
  static char Representation[] = "0123456789ABCDEF";
  static char buffer[50];
  char *ptr;

  ptr = &buffer[49];
  *ptr = '\0';

  do
    {
      *--ptr = Representation[num % base];
      num /= base;
    }
  while(num != 0);
  return (ptr);
}

/**
 *_printf- Prints according to a format
 *
 *@format: Format
 *
 *Return: int
 */

int _printf(char *format, ...)
{
  char *traverse;
  int i;
  char *s;
  int count = 0;

  va_list arg;
  va_start(arg, format);

  for (traverse = format; *traverse != '\0'; traverse++)
    {
      while (*traverse != '%')
	{
	  putchar(*traverse);
	  traverse++;
	  count = count + 1;
	}

      traverse++;

      switch(*traverse)
	{
	case 'c' : i = va_arg(arg, int);
	  {
	  putchar(i);
	  count = count + 1;
	  break;
	  }

	case 'd' : i = va_arg(arg, int);
	  {
	    if (i < 0)
	      {
		i = -i;
		putchar('-');
	      }
	    puts(convert(i, 10));
	    while (i != 0)
	      {
	    ++count;
	    i = i / 10;
	      }
	    break;
	  }

	case 'o' : i = va_arg(arg, unsigned int);
	  {
	    puts(convert(i, 8));
	    count++;
	    break;
	  }

	case 's' : s = va_arg(arg, char *);
	  {
	    puts(s);
	    count++;
	    break;
	  }

	case 'x' : i = va_arg(arg, unsigned int);
	  {
	    puts(convert(i, 16));
	    count++;
	    break;
	  }
	  
	}
    }
  return (count);
}
