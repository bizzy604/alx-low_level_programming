#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - reversing the content of an array
 * @a: parameter 1
 * @n: size of the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;
	}
}
