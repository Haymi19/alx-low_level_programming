#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **array;

	int i;

	array = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	return (array);

	free(array);
}
