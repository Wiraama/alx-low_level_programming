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
	char  *ptr;
	char *result;

	/**allocating memory with s1 first bye of s2 and a null terminator**/
	ptr = malloc(strlen(s1 + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	/**f n is greater or equal to the length of s2 use the entire string s2**/

	if (n >= strlen(s2))
	{
		strcat(ptr, s2);
	}
	else /**Concatenate the first n bytes of s2**/
	{
		strncat(ptr, s2, n);
	}
	result = ptr;

return (result);
}
