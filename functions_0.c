#include "main.h"

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
      putchar(*c++);
      ++count; 
    }
  return (count);
}
