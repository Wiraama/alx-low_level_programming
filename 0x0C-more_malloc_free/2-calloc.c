#include "main.h"
#include <stdlib.h>

/**
 * _memset - First n bytes of the memory area pointed to by s with b.
 * function that allocates memory for an array, using malloc
 * @s: character pointer
 * @b: character
 * @n: integer not to be negative
 *
 * Return: malloc pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array
 * function that allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/**allocating the fucking memory**/
	ptr = malloc(size * nmemb);

	/**checking if the damn memory is allocated**/
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
