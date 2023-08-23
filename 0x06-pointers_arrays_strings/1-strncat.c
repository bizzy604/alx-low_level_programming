#include "main.h"
#include <string.h>
/**
 * _strncat - concatinating 2 strings with n values
 * @dest: destination
 * @src: Source
 * @n: number of bytes
 * Return: Character
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[1] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
