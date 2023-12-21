#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: always 0
*/
void print_most_numbers(void)
{
int number;
for (number = 48; number < 58; number++)
{
if ((number == 50) || (number == 52))
{
continue;
}
_putchar(number);
}
_putchar(10);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
