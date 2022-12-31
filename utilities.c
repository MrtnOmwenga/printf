#include "main.h"

/**
 *print_null- Prints "null"
 *
 */

void print_null()
{
  char nul[7] = "(null)";
  int i;
  
  for (i = 0; i < 6; i++)
    {
      _putchar(nul[i]);
    }
}

/**
 *count- Counts number of digits in a number
 *
 *@n: number
 *
 *Return: count
 */

int count(int n)
{
  int result = 0;
  
  if (n < 0)
    {
      n = -n;
      result++;
    }
  else if (n == 0)
    {
      result++;
    }

  while (n != 0)
    {
      n = n / 10;
      result++;
    }

  return (result);
}

/**
 *_putchar- Pritns character
 *
 *@c: Charactter to be printed
 *
 */

void _putchar(char c)
{
  write(1, &c, 1);
}

/**
 *print_min- Loops through INT_MIN
 *
 *@n: INT_MIN
 *
 */

void print_min(int n)
{
  
  if (n / 10)
    {
      print_min(n / 10);
    }

  write_int('0' - (n % 10));
}

/**
 *print_int- Loops through a number
 *
 *@n: Number to be looped through
 *
 *Return: void
 */

void print_int(int n)
{
  if (n < 0)
    {
      _putchar('-');
      n = -n;
    }
  if (n / 10)
    {
      print_int(n / 10);
    }
  write_int((n % 10) + '0');
}

/**
 *write_int- Prints a number
 *
 *@n: Number to be printed
 *
 *Return: void
 */

void write_int(int n)
{
write(1, &n, 1);
}
