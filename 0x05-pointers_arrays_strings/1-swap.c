#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * this fuction swaps values of two integers
 *
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	*a = 35;
	*b = 45;

	printf(" Before swap a=%d b=%d", *a, *b);
	/**swaping**/
	*a = *b;
	*b = *a;
	printf("After swaping a=%d b=%d", *a, *b);
}
