#include "main.h"
#include <stdio.h>

/**
 * function that draws a straight line in the terminal.
 */
void print_line(int n)
{
	if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i;

        for (i = 0; i < n; i++)
        {
            _putchar('_');
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
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
