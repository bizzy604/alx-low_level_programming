#include "main.h"
#include <string.h>
/**
 *_strlen - printing the length of the string
 *
 *@s: Parameter of the string
 *
 *Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;
	
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
