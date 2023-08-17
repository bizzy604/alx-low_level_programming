#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: parameter to be passed
 * Return: _ if success 0 otherwise
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar ('_');
		_putchar ('\n');
	}
	else
		_putchar ('\n');
}
