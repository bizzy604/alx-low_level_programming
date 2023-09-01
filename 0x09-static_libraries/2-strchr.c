#include "main.h"
#include <stddef.h>
/**
 * _strchr - printing the first occurance of c
 * @s: string to be passed
 * @c: character to be checked
 * Return: return s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
