#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop to print numbers 0-9 in base 16 */
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	/* Loop to print lowercase letters a-f in base 16 */
	for (i = 0; i < 6; i++)
	{
		putchar('a' + i);
	}

	/* Print a new line */
	putchar('\n');

	return (0);
}
