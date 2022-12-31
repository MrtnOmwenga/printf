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
  int integer, count = 0;

  integer = va_arg(a, int);

  if (integer < 0)
    {
      count = c_binary(-integer);
    }
  else
    {
      count = binary(integer);
    }
  
  return(count);
}
