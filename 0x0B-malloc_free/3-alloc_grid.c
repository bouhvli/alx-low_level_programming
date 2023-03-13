#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: for the rows.
 * @height: for the cols.
 *
 * Return: pointerto a 2 dimensional array of integers,
 * return NULL on failure,
 * and If width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		i++
	}
	return (grid);
}
