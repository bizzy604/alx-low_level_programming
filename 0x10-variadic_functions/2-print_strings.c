#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - prints strings followed by a new line.
 * @separator: separator string
 * @n: number of arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list my_list;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(my_list, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
