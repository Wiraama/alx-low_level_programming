#include <stdio.h>
/**
 * main - Enrty point
 *  a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *
 *  Return: Always 0
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
int main() {
    printFibonacci(50);

    return 0;
}
