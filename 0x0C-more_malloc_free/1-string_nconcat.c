#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: NULL if zero otherwise pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k, l;
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

	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	for (k = 0; k < i; k++)
	{
		if (*s1)
			ptr[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		if (*s2)
			*(ptr + k + l) = s2[l];
	}
	return (ptr);
}
