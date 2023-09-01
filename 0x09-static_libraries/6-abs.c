#include "main.h"
#include <stdio.h>

/**
 *_abs - main function for computng absolute values of an integer
 *
 *@i: parameter being passed
 *
 * Return: -i or i
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i > 0)
		return (i);
	return (0);
}
