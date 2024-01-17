#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - main prototype
 * unction that concatenates two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: nothing
 */

char *str_concat(char *s1, char *s2)
{
	size_t len_1;
	size_t len_2;


	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	/**calculate the length before concating**/
	len_1 = strlen(s1);
	len_2 = strlen(s2);

	str = (char *)malloc(len_1 + len_2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);/**copy s1 to str beforen join**/
	strcat(str, s2);/**joining**/

	return (str);
	/**wiriama**/
}
