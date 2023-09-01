#include "main.h"
#include <string.h>
/**
 * _strcat - concatinating two strings
 * @dest: destination string
 * @src: source string
 * Return: Character
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
