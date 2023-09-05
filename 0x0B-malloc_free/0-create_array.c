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

	if (size == 0 )
		return (NULL);
	if (ptrArray == 0)
		return (NULL);
	while (i < size)
	{
		ptrArray[i] = c;
		i++;
	}
	return (ptrArray);
}
