#include "search_algos.h"
#include <math.h>
/**
 * jump_search - main entry point
 * function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to first
 * @size: size of aray
 * @value: what to be searched
 *
 * Return: always to main
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, step, prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (prev + step >= size || array[prev + step] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);
			break;
		}
		prev += step;
	}


	for (i = prev; i < size && i <= prev + step; i++)
	{
		printf("Value cheacked array [%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (1);
		}
	}
	return (-1);
}
