#include "main.h"
/**
 * _pow_recursion - powers using recursion
 * @x: base value
 * @y: power
 * Return: Return y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
