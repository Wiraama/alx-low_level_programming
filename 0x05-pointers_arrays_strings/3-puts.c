#include "main.h"

/**
 * program to print a string with a new line
 *
 * @str: this will bestring in my program
 * Return: nothing
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
