#include "main.h"
#include <stdlib.h>


/**
 * free_grid - the main entry point
 * fuction to free memory of the privious project
 * @height: array from the project
 * @grid: pointer to pointer
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
