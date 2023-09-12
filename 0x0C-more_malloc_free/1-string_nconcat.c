#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: NULL if zero otherwise pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	ptr = malloc((i * sizeof(char) + n + 1);
	if (ptr == NULL)
		return (0);

	for (j = 0; j < i + n; j++)
	{
		if(!(j >= i)
			ptr[j] = s1[j];
		else
			ptr[j] = s2[j - i];
	}
	ptr[j] = '\0';
	return (ptr);
}
