#include "main.h"

/**
 * _puts_recursion - main fuction in this program
 *
 * function that prints a string, followed by a new line.
 *
 * @*s: character to hold the string
 *
 * Return: value of s
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
