#include <unistd.h>
#include "main.h"
#include <limits.h>

/**
 *prep_min- Loops through INT_MIN
 *
 *@n: INT_MIN
 *@x: counter
 *@flag: flag
 *
 *Return: void
 */

void prep_min(int n, int x, int flag)
{
  int a;
  if (n < 0 && flag == 0)
    {
     _putchar_c('-');
    
     n = n * -1;
    }
  if (x != 1)
    {
  if (n / 10)
    {
      prep_min((n / 10), (x + 1), 0);
    }
  write_int((n % 10) + '0');
    }
  else
    {
      prep_min((n / 10), (x + 1), 0);
      a = -(n % 10);
      write_int(a + '0');
    }
  }

/**
 *prep_int- Loops through a number
 *
 *@n: Number to be looped through
 *
 *Return: void
 */

void prep_int(int n)
{
  if (n < 0)
    {
      _putchar_c('-');
	n = n * -1;
    }
  if (n / 10)
    {
      prep_int(n / 10);
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
