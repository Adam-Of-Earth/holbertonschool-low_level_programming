#include "holberton.h"

/**
 * alloc_grid - makes space for 2d array
 * @width: how wide the grid will be
 * @height: how tall
 *
 * Return: array or NULL if falure
 */
int **alloc_grid(int width, int height)
{
	int **ret;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);
	ret = malloc(height * sizeof(int *));
	if (ret == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		ret[y] = malloc(width * sizeof(int));
		if (ret[y] == NULL)
		{
			for (height = 0; height < y; height++)
				free(ret[height]);
			free(ret);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			ret[y][x] = 0;
	}
	return (ret);
}
