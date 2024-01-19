#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry point to the program
 * function that allocates memory for an array, using malloc
 * @nmemb: value
 * @size: value
 *
 * Return: malloc pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	/**checking if its null**/
	if (nmemb == 0 || size == 0)
	{
		return (0);
	}

	/**allocating memoryb with malloc**/
	ptr = malloc(nmemb * size);

	/**check if malloc return null**/
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
