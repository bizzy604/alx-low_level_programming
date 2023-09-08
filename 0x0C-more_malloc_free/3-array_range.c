#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/*
 * *array_range - arranging of array
 * @min: minium parameter
 * @max: maximum parameter
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptrA;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptrA = malloc(sizeof(int) * size);
	if (ptrA == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptrA[i] = min++;
	return (ptrA);
}
