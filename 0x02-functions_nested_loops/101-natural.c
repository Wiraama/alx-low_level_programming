#include <stdio.h>
/**
 * main - Entry point
 *
 * A program that computes and prints the sum of all the multiples
 * Starting with 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: always 0
 */
int main() {
    int sum = 0;

    for (int i = 0; i < 1024; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);

    return 0;
}
