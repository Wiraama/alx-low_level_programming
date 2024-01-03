#include "main.h"
/**
 * this fuction will print  a string, in reverse, followed by a new line
 *
 * @str: will b e my string
 */
void _putchar(char c) {
    putchar(c);
}

void _puts(char *str) {
    int index;

    for (index = 0; str[index] != '\0'; index++) {
        _putchar(str[index]);
    }
    _putchar('\n');
}
