#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to be processed.
 */
void puts_half(char *str)
{
    int length = 0;
    int half;

    while (str[length] != '\0')
        length++;

    half = (length + 1) / 2;

    while (str[half] != '\0')
    {
        _putchar(str[half]);
        half++;
    }

    _putchar('\n');
}
