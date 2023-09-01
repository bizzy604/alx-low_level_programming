#include "main.h"
#include <stdio.h>
/**
 *_islower - function for printing lower character
 *@c:  Parameter for integer
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
