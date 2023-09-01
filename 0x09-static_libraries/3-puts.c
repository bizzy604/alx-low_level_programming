#include "main.h"
/**
 *_puts - printing string
 *
 *@str: Parameter
 *Return: Void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
