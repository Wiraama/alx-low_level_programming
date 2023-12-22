#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
    int i = 0;
    char l;

    while (i < 10)
    {
        l = 'a';
        while (l <= 'z')
        {
            putchar(l);
            l++;
        }
        i++;
    }

    putchar('\n');
}
