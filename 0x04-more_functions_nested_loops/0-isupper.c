#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: paramater to be tested
 * Return: 1 if success 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
