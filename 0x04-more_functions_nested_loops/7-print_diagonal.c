#include "main.h"
/**
 * print_diagonal - function that prints a diagonal on terminal
 * @n: parameter to be used.
 * Return: \n if n < 0
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
