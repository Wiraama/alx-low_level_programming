#include "main.h"

/**
  * _islower - Checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
void test_islower(int n)
{
	int r;

	r = islower(n);
	_putchar(r + '0');
	_putchar('\n');
}
