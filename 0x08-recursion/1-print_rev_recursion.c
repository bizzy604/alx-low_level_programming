#include "main.h"
#include <stddef.h>
/**
 * _print_rev_recursion - printing string in reverse
 * @s: string to be passed
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
