#include "main.h"
/**
 * main - Entry point
 *
 * @_strlen - fuction toreturn the length of a string
 * @s: string
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int index;

	for(index = 0; s[index] != '\0'; index++);
	return (index);
}
