#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - main fuction in this program
 *
 * function that returns the length of a string
 *
 * @*s: character to hold the &string
 *
 * Return: value of s
 */

int _strlen_recursion(char *s)
{
 if(*s == 0)
 {
   return (0);
 }
 return 1 + _strlen_recursion(s + 1);
}
