#include <stdio.h>

#include <stdlib.h>

#include "main.h"



/**

 * main - Entry point

 *

 * Return: 0 on success, error code otherwise

 */

int main(void)
  
{
  
  int len, len2;
  

  
  len = _printf("%d", 1024);
  
  len2 = printf("%d", 1024);
  
  fflush(stdout);
  
  if (len != len2)
    
    {
      
      printf("Lengths differ.\n");
      fflush(stdout);
      printf("%d, %d", len, len2);      
      return (1);
      
    }



  return (0);
  
}
