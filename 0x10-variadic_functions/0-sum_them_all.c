#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function returns the sum of all it's parameters
 * @n: number of parameters
 *
 * Return: 0 if successful. 1 otherwise.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list my_list;

	va_start(my_list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(my_list, int);

	va_end(my_list);

	return (sum);
}
