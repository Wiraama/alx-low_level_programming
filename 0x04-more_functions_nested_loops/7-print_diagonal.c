#include "main.h"
#include <stdio.h>

/**
 * function that draws a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	if(n <= 0)
	{
		_putchar(' ');
	}
	else
	{
		int i;

		for(i = 0; i < n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
