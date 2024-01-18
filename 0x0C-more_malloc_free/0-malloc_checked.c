#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - main entry point
 * function that allocates memory using malloc
 * @b: size to be allocated
 *
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);/**allocate memory**/

	/**when malloc fails to terminite the normal process**/
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
