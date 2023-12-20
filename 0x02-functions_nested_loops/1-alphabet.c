#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        putchar(letter);

    putchar('\n');
}

/**
 * main - entry point
 * 
 * Return: 0
 */
int main(void)
{
    print_alphabet();
    return (0);
}
