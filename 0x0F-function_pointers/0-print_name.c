#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - main entry point
 * @name: pointer to name to the person
 * @f: pointer to function
 *
 * Return: to main function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
