#include "main.h"
/**
 * print_triangle - prints a triangle in the terminal
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i, j;

        for (i = 0; i < size; i++)
        {
            // Print spaces before the '#' characters
            for (j = 0; j < size - i - 1; j++)
            {
                _putchar(' ');
            }

            // Print the '#' characters
            for (j = 0; j < i + 1; j++)
            {
                _putchar('#');
            }

            _putchar('\n');
	}
    }
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
