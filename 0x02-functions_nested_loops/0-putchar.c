#include <stdio.h>

#include "main.h"



/**

 * main - prints a string

 *

 * Return: 0

 */

int main(void)
  
{
  
  char my_string[] = {'_', 'p', 'u', 't', 'c', 'h',
		      
		      'a', 'r'};
  

  
  int x = 0, err_no;
  

  
  while (x <= 7)
    
    {
      
      err_no = _putchar(my_string[x]);
      
      if (err_no == 1)
	
	x++;
      
      else
	
	x = 8;
      
    }
  
  putchar('\n');
  
  return (0);
  
}
