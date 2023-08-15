#include "main.h"
#include <stdio.h>
/**
* print_last_digit - printing the last digit in a number
* @n: paramater being passed to the function
* Return: void
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
