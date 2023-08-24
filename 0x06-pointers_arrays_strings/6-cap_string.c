#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - capitalizing the first letter of a string
 * @str: parameter
 * Return: Character
 */
char *cap_string(char *str)
{
	int i;
	const char *separators = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{

		if ((i == 0 || strchr(separators, str[i])) && islower(str[i + 1]))
		{
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	return (str);
}
