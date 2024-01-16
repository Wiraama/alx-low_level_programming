#include "main.h"
#include <stdlib.h>

/**
 * create_array - fuction prototype
 * function to create an array of char and initialize it with a specific char
 * @c: character to be initiallize
 * @size: space in bytes
 *
 * Return: always 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

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
	for (i = 0; i < size; ++i)
	{
		ptr[i] = c;
	}
	return (ptr);
}
