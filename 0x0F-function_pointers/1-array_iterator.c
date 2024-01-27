#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - main entry point
 * @array: member
 * @size: bytes to be preserved
 * @action: pointer array
 *
 * Return: to main function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
