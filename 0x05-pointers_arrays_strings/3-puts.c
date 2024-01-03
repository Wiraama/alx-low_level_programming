#include "main.h"
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: function that prints a string, followed by a new line, to stdout.
 * Return: Aways 0
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
