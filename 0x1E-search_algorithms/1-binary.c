#include "search_algos.h"
/**
 * print_array - ...
 * @array: p to element 1
 * @left: half on left
 * @right: half on right
 */

void print_array(int *array, size_t left, size_t right)
{
        size_t i;

        printf("searching in array: ");
        for( i = left; i <= right; i++)
        {
                printf("%d", array[i]);
                if (i < right)
                {
                        printf(", ");
                }
        }
        printf("\n");
}

/**
 * binary_search - main entry
 * searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to 1st element
 * @size: no. of element
 * @value: target item
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right;

	left = 0;
	right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while(left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left)/2;
		if (array[mid] == value)
		{
			return ((int)mid);
		}
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid -1;
	}
	return (-1);
}
