#include "main.h"
#include <stdio.h>

/**
 *_isalpha - function to run the lower and upper letters
 *@c: parameter to be passed
 *Return: 1 or 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'))
		return (1);
	else
		return (0);
}
