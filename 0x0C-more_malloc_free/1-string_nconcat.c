#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - entry point
 * function that concatenates two strings.
 * @s1: string one
 * @s2: string 2
 * @n: unsigned it
 *
 * Return: results to main
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t len_s1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t len_s2 = (s2 != NULL) ? strlen(s2) : 0;

	ptr = malloc(len_s1 + ((n >= len_s2) ? len_s2 : n) + 1);

	if (ptr == NULL)
	{
		return NULL;
	}

	if (len_s1 > 0)
	{
		memcpy(ptr, s1, len_s1);
	}

	if (n >= len_s2)
	{
		if (len_s2 > 0)
		{
			memcpy(ptr + len_s1, s2, len_s2);
		}
	}
	else
	{
		memcpy(ptr + len_s1, s2, n);
	}

	ptr[len_s1 + ((n >= len_s2) ? len_s2 : n)] = '\0';

	return ptr;
}
