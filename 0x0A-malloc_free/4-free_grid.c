#include "holberton.h"

/**
 * free_grid - free an array
 * @grid: array to free
 * @height: rows to free
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height < 1)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
