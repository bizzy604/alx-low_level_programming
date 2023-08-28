#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - comparing two strings
 * @s1: destination string
 * @s2: source string
 * Return: integer 1, 0 or less than 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s2[i] < s1[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}