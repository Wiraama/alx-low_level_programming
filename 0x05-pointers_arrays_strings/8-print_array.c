#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * program to print n elements of an array of integers, followed by a new line.
 * @a: arry
 * @n: no. of elements
 * return to 0
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
