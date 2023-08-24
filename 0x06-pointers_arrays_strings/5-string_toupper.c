#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changing loercase string to uppercase
 * @str: parameter
 * Return: character
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
