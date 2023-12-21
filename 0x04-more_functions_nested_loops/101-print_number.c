#include <stdio.h>

/**
 * _putchar - a simplified version of putchar
 * @c: The character to be printed
 */
void _putchar(char c)
{
    putchar(c);
}

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n; // Make n positive for easier manipulation
    }

    if (n / 10 != 0)
    {
        print_number(n / 10);
    }

    _putchar(n % 10 + '0');
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    print_number(123);
    _putchar('\n');

    print_number(-456);
    _putchar('\n');

    print_number(0);
    _putchar('\n');

    return (0);
}
