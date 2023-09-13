#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - prints a name.
 * @name: name to be printed.
 * @ptrname: pointer to function.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*ptrname)(char *))
{
	if (name == NULL || ptrname == NULL)
	{
		return;
	}
	ptrname(name);
}
