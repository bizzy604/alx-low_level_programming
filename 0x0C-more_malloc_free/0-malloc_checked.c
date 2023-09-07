#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - checking mem allocation
 * @b: integer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointerA;

	pointerA = malloc(b);
	if (pointerA == NULL)
		exit (98);
	return (pointerA);
}
