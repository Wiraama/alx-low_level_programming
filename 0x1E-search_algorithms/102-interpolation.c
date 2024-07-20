#include "search_algos.h"

/**
 * searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high && array[low] <= value && array[high] >= value)
	{
		if (low == high)
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			return (low);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
			printf("Value checked array[%lu] is out of range\n", pos);
		printf("Value cheaked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n",pos);
	return (-1);
}
