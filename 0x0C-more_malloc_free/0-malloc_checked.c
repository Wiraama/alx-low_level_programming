#include "main.h"

/**
 * malloc_checked - main entry point
 * function that allocates memory using malloc
 * @b: size to be allocated
 *
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	result = (int *)malloc(unsigned int b);/**allocate memory**/

	/**when malloc fails to terminite the normal process**/
	if (result == NULL)
	{
		return (98);
	}
	else
	{
		return (result);
	}
}
