#include "main.h"

/**
 *swap_int - swapping the variable values
 *@a: parameter 1
 *@b: parameter 2
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
