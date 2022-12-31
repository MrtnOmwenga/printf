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
  int integer, binary = 0, x = 1;

  integer = va_arg(a, int);
  while (integer != 0)
    {
      binary += (integer % 2) * x;
      x *= 10;
      integer /= 2;
    }

  print_int(binary);
  return(count(binary));
}
