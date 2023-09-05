#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of characters and initializes
 * it with a specific char,
 * @size: size to be passed
 * @c: character to be passed
 * Return: Character pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptrArray = malloc(size * sizeof(char));
	unsigned int i = 0;

	while (i < size)
	{
		ptrArray[i] = c;
		i++;
	}
	return (ptrArray);
}
