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
	*a = 98;
	*b = 42;

	printf(" Before swap a=%d b=%d", *a, *b);
	/**swaping**/
	int c = *a
	*a = *b;
	*b = c;
	printf("After swaping a=%d b=%d", *a, *b);
}
