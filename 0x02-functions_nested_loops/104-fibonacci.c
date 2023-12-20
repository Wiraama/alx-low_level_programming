#include <stdio>
#include <stdio.h>

/**
 * printFibonacci - Prints the first n Fibonacci numbers.
 * @n: The number of Fibonacci numbers to print.
 */
void printFibonacci(int n) {
    int first = 1, second = 2, next;

    printf("%d, %d", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);

        first = second;
        second = next;
    }
    printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void) {
    printFibonacci(98);  /* Print the first 98 Fibonacci numbers */

    return (0);
}
