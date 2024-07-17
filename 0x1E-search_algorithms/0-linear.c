#include "search_algos.h"
/**
 * linear_search - main entry point
 * function that searches for a value in an array of integers using the Linear search algorithm
 * @array: pointer to 1st element
 * @size: size of array
 * @value: what to search
 *
 * Return: to main
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for( i = 0; i < size; i++)
	{
		if(array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
