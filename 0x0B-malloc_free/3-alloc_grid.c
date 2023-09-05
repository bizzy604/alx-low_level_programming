#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer of 2D array.
 * @width: width of array
 * @height: height of the array
 * Return: A pointer of 2D array
 */
int **alloc_grid(int width, int height)
{
	int **Array, i, j;
	int length = width * height;

	if (length <= 0)
		return (NULL);
	Array = malloc(height * sizeof(int *));
	if (Array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		Array[i] = malloc(width * sizeof(int *));
		if (Array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(Array[i]);
			free(Array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			Array[i][j] = 0;
	}
	return (Array);
}
