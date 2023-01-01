#include "main.h"

/**
 *_binary- Prints binary
 *
 *@a: Number to be printes
 *
 *Return: Number of digits
 */

int _binary(va_list a)
{
  int integer, count = 0, binary[32], x, negative = 0;

  integer = va_arg(a, int);

  if (integer < 0)
    {
      integer = -integer;
      negative = 1;
    }
  else if (integer == 0)
    {
      _putchar(0 + '0');
      return (1);
    }

  for (x = 0; integer > 0; x++)
    {
      binary[x] = integer % 2;
      integer /= 2;
    }
  
  if (negative)
    {
      while (x < 32)
	{
	  binary[x] = 1;
	  x++;
	}
    }
  
  count = x;
  for (x = x - 1; x >= 0; x--)
    {
      _putchar(binary[x] + '0');
    }
  
  return(count--);
}
