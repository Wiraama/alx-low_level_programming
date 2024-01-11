#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
  if(y < 0)
  {
    return(-1);
  }
  /**x^y = x*x^y-1**/
  return x*_pow_recursion(x,y-1);
}
