#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - raises x to the power of y
 *
 * function that returns the value of x raised to the power of y.
 * @x: value
 * @y:power
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	/**x^y = x*x^y-1**/
	return (x * _pow_recursion(x, y - 1));
}
