#include <unistd.h>
#include "main.h"

/**
 *prep_int- Loops through a number
 *
 *@n: Number to be looped through
 *
 *Return: void
 */

void prep_int(int n)
{
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
