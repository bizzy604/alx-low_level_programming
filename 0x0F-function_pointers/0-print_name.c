#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: name to be printed.
 * @ptrname: pointer to function.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*ptrname)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	ptrname(name);
}
