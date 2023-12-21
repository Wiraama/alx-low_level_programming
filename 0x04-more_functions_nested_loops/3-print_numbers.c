#include "main.h"
#include <stdio.h>

/**
 * fuction to print zero to nine followed y a new line
 * this is a prototype
 */
void print_numbers(void)
{
	int d;

	for(d > 0; d < 10; d++)
	{
		putchar(d + '0');
		return(0);
	}
	putchar('\n');

	return(0);
}

/**
 * main - entry point to cheack the code
 *
 * Return: Always o.
 */
int main(void)
{
	print_numbers();
	return(0);
}
