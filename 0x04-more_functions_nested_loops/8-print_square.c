#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int inc1, inc2;
	
	if (size > 0)
	{
		for (inc1 = 0; inc1 < size; inc1++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				_putchar('#');
				_putchar('#');
				_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}
	}
}
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
