#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatinating strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer to s1
 */
char *str_concat(char *s1, char *s2)
{
	char *final;
	int i, j, len1, len2, len;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	final = malloc((len + 1) * sizeof(char));
	if (final == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		final[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		final[i] = s2[j];
	final[len] = '\0';
	return (final);
}
