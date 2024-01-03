#include "main.h"
#include <stdio.h>
/**
 * this function reverses a string
 *
 * @s: will be my string
 */
void rev_string(char *s)
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
