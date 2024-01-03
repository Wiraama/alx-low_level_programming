#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of array
 *
 *
 * program to print n elements of an array of integers, followed by a new line.
 * @a: array
 * @n: no. of elements
 * Return: to 0
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
