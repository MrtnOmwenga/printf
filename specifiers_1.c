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
  int integer, x, binary[100], count = 0;

  integer = va_arg(a, int);
  for (x = 0; integer > 0; x++)
    {
      binary[x] = integer % 2;
      integer /= 2;
    }

  count = x;
  for (x = x - 1; x >= 0; x--)
    {
      _putchar(binary[x] + '0');
    }
  
  return(count--);
}
