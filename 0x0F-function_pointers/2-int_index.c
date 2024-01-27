#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - main entry point
 * @array: member
 * @size: sixe of array
 * @cmp: pointer to function
 *
 * Return: to main function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/** If size <= 0, return -1 **/
	if (size <= 0)
	{
		return (-1);
	}

	/**returning the compzared fuction**/
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
