#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array.
 * @size: number of elements in each element of the array.
 *
 * Return: NULL if fail. pointer otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);

	for (i = 0; i < nmemb * size; i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}
