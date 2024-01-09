#include "main.h"
#include <stdio.h>

/**
  * print_chessboard - main function
  *
  @a: function that prints the chessboard
  *
  * Return: Always 0.
  */
void print_chessboard(char (*a)[8]) {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            _putchar(a[i][j]);
            _putchar(' ');
        }
        _putchar('\n');
    }
}
