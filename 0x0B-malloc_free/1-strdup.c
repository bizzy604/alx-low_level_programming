#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - function that returns a pointer to a new memory
 * @str: a string to be passed
 * Return: A pointer string
 */
char *_strdup(char *str)
{
	char *ptrStr;
	int i = 0;
	int count;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	ptrStr = malloc(i * sizeof(char) + 1);
	if (ptrStr == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
		ptrStr[count] = str[count];
	}
	ptrStr[count] = '\0';
	return (ptrStr);
}
