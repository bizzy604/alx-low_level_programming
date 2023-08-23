#include "main.h"
#include <string.h>
/**
 * reverse_array - reversing the content of an array
 * @a: parameter 1
 * @n: size of the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
		printf("%d", a[i]);
	return (0);
}
