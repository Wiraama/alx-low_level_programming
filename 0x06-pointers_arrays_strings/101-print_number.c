#include "main.h"
#include <stdio.h>
/**
 * print_number - Print an integer using only _putchar
 * @n: integer to print
 */

void print_number(int n) {
  if (n < 0) {
  _putchar('-');
  n *= -1;
  }
  
  if (n == 0) {
  _putchar('0');
  return;
  }
  
  int temp = n;
  int num_digits = 0;
  
  while (temp != 0) {
  temp /= 10;
  num_digits++;
  }
