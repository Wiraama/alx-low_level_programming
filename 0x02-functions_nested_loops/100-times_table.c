#include <stdio.h>
/**
 * function that prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0 the function should not print anything
 */
void print_times_table(int n)
{
	 if (n < 0 || n > 15)
	 {
		 return;
	 }
	 for (int i = 0; i <= 10; i++)
	 {
		 printf("%d * %d = %d\n", n, i, n * i);
	 }
}
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	 print_times_table(7);

    return 0;
}
