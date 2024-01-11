#include "main.h"
/**
 * factorial - fuction to this prototype
 * @n: number called from main fuction
 *
 * Return: factorial of n
 */
int factorial(int n)
{
  if(n < 0)
  {
    return (-1);
  }
  if(n == 0)
  {
    return (1);
  }
  return n*factorial(n-1);
}
