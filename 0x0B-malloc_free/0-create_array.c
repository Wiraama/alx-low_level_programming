#include "main.h"
#include <stdlib.h>

/**
 * create_array - fuction prototype
 * function to create an array of char and initialize it with a specific char
 * @c: character to be initiallize
 * @ptr: pointer to the memory
 * @size: space in bytes
 *
 * Return: always 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	/**to initialize ARRAY**/
	for (unsigned int i = 0; i < size; ++i)
	{
		ptr[i] = c;
	}
	return (ptr);
}
