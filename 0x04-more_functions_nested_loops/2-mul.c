#include "main.h"
#include <stdio.h>

/**
 * prototype
 * fuction to multiply 2 numbers
 */
int mul(int a, int b)
{
    return (a * b);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
