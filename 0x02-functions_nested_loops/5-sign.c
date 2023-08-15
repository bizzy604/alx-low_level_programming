#include "main.h"
#include <stdio.h>

/**
 *print_sign - printing sign if value is grater or less than 0
 *
 *@n: function parameter
 *
 *Return: return 1, 0, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
