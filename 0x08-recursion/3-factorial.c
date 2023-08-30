#include "main.h"
/**
 * factorial - calculating the factorial
 * @n: integer to be passed
 * Return: Always 0
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	fact = (n * factorial(n - 1));
	return (fact);
}
