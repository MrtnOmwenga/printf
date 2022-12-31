#include "main.h"

/**
 *_int- Print integers
 *
 *@a: Integer to be printed
 *
 *Return: Number of digits
 */

int _int(va_list a) 
{
  int n;
  
  n = va_arg(a, int);
  if (n == INT_MIN)
    {
      _putchar('-');
      print_min(n); 
    }
  else
    {
      print_int(n);
    }
  
  return (count(n));
}

/**
 *_char- Prints a char
 *
 *@a: char
 *
 *Return: 1
 */

int _char(va_list a)
{
  char c;
  c = va_arg(a, int);
  write(1, &c, 1);
  return (1);
}

/**
 *_str- Prints i string
 *
 *@a: string
 *
 *Return: No of characters in string
 */

int _str(va_list a)
{
  char *c;
  int count = 0;
  
  c = va_arg(a, char *);
  while (*c != '\0')
    {
      _putchar(*c++);
      ++count; 
    }
  return (count);
}
