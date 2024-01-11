#include "main.h"

/**
 * _print_rev_recursion - main fuction in this program
 *
 * function that prints a string in reverse
 *
 * @*s: character to hold the &string
 *
 * Return: value of s
 */

void _print_rev_recursion(char *s)
{
  int length = 0;
  while (s[length] != '\0')
  {
    length++;
  }
  for (int i = length-1; i>=0; i--)
  {
    putchar (s[i]);
  }
}
