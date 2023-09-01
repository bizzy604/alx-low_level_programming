#include "main.h"
#include <string.h>
/**
 *_strncpy - copying strings
 *@dest: A pointer destination
 *@src: A source file from which the files are copied from
 *@n: maximum number for coping
 *Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
