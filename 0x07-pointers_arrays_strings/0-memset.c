#include "main.h"

/**
 * main - Entry point
 * function that fills memory with a constant byte.
 *
 * @*s: pointer to store the pointed memory space
 * @b: the constant byte
 * @n: 
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
    {
        s[i]=b;
    }
    return s;
    
}
