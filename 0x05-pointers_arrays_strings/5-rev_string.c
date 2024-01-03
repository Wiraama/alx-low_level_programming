#include "main.h"
/**
 * this function reverses a string
 *
 * @s: will be my string
 */
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
