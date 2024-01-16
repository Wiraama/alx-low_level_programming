#include "main.h"
#include <stdlib.h>

/**
 * _strdup - prototype Entry point
 * @str: string
 *
 * Return: always nothing
 */

char *_strdup(char *str)
{

	if (str == 0)
	{
		return (NULL);
	}
	/** to get length of the input string**/
	size_t length = strlen(str);
	/**allocate memory**/
	char *duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	/**copies and duplicates**/
	for (size_t i = 0; i <= length; ++i)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
