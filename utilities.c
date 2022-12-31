#include "main.h"

/**
 *print_min- Loops through INT_MIN
 *
 *@n: INT_MIN
 *@x: counter
 *@flag: flag
 *
 */

void print_min(int n)
{
  putchar('-');
  n = n * -1;
  
  if (n / 10)
    {
      print_min(n / 10);
    }

  write_int((n % 10) + '0');
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
      putchar('-');
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
