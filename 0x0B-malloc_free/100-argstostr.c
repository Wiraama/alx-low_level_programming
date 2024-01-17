#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main entry point
 * futction to concate all yor argument in your program
 * @ac: hold total length in integer form
 * @av: holda the string
 *
 * Return: nothing
 */
char *argstostr(int ac, char **av)
{
	int x, i, totalen;
	char *result;

	totalen = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/** Let's calculate length of string**/
	for (i = 0; i < ac; i++)
	{
		totalen += strlen(av[i]) + 1;/**+1 reps '\n'**/
	}

	/** Allocate memory on our machine using  malloc**/
	result = (char *)malloc(sizeof(totalen + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	/**concating arguments**/
	result[0] = '\0';
	for (x = 0; x < ac; x++)
	{
		strcat(result, av[x]);
		strcat(result, \n);
	int cddoncated = 0;
	}
	return (result);


}
