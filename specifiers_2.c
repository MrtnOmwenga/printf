#include "main.h"

/**
 *_hex- Prints hexadecimal
 *
 *@a: Number to be printed
 *
 *Return: Number of digits
 */

int _hex(va_list a)
{
  unsigned int integer, hex[32];
  int x, count;
  
  integer = va_arg(a, unsigned int);

  if (integer == 0)
    {
      _putchar(0 + '0');
      return (1);
    }

  for (x = 0; integer > 0; x++)
    {
      if (integer % 16 < 10)
	{
	  hex[x] = (integer % 16) + 48;
	}
      else
	{
	  hex[x] = (integer % 16) + 87;
	}
      
      integer /= 16;
    }

  count = x;
  for (x = x - 1; x >= 0; x--)
    {
      _putchar(hex[x]);
    }

  return (count--);
}
