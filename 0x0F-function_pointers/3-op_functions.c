#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - entry place
 * fuction defination
 * @a: number
 * @b: number
 *
 * Return: fuck you
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry place
 * fuction defination
 * @a: number
 * @b: number
 *
 * Return: fuck you
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - entry place
 * fuction defination
 * @a: number
 * @b: number
 *
 * Return: fuck you
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry place
 * fuction defination
 * @a: number
 * @b: number
 *
 * Return: fuck you
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - entry place
 * fuction defination
 * @a: number
 * @b: number
 *
 * Return: fuck you
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
