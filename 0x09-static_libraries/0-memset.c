#include "main.h"
#include <string.h>
/**
 * _memset - setting a memory block to a specific number of bytes
 * @s:  pointer
 * @b: character to be passed
 * @n: size of the elements
 * Return: pointers to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
