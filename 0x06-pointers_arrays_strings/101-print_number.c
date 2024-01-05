#include "main.h"

/**
 * print_number - print an integer
 * @num: integer to print
 */
void printInteger(int num) {
    if (num < 0) {
        _putchar('-');
        num = -num;
    }

    if (num == 0) {
        _putchar('0');
        return;
    }

    char buffer[20];  /**Assuming a 32-bit integer, which requires at most 11 digits plus a sign and null terminator**/
    int index = 0;

    while (num > 0) {
        buffer[index++] = num % 10 + '0';
        num /= 10;
    }

    for (int i = index - 1; i >= 0; i--) {
        _putchar(buffer[i]);
    }
}
