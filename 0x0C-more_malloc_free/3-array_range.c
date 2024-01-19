#include "main.h"
#include <stdlib.h>

/**
 * array_range - main entry
 * function that creates an array of integers.
 * @max: maximum value
 * @min: minimum value
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int value, i;

	/**check if the values are apropriate**/
	if (min > max)
	{
		return (0);
	}
	/**getting number in that range**/
	value = max - min + 1;

	/**allocating memory**/
	ptr = malloc(value * sizeof(int));

	/**checking if memory is allocated**/
	if (ptr == NULL)
	{
		return (0);
	}

	/** inputing all values**/
	for (i = 0; i < value; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
