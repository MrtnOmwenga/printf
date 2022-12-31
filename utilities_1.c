#include "main.h"

/**
 *binary- Prints binary
 *
 *@integer: Integer to be converted
 *
 *Return: No. of digits
 */

int binary(int integer)
{
  int binary[200], count, x;
  
  if (integer == 0)
    {
      _putchar(0 + '0');
      return (1); 
    }
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

/**
 *c_binary- Prints binary complement
 *
 *@integer: Integer to be converted
 *
 *Return: No of characters
 */

int c_binary(int integer)
{
  int binary[200], count, x;

  for (x = 0; integer > 0; x++)
    {
      if (integer % 2 == 0)
	{
	  binary[x] = 1;
	}
      else
	{
	  binary[x] = 0;
	}
      integer /= 2; 
    }

  count = x;
  for (x = x - 1; x >= 0; x--)
    {
      _putchar(binary[x] + '0'); 
    }

  return(count--);
}
