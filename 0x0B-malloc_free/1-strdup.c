#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - prototype Entry point
 * @str: string
 *
 * Return: always nothing
 */

char *_strdup(char *str)
{
	size_t i;
	size_t length;
	char *duplicate;

	if (str == 0)
	{
		return (NULL);
	}
	/** to get length of the input string**/
	length = strlen(str);
	/**allocate memory**/
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	/**copies and duplicates**/
	for (i = 0; i <= length; ++i)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
