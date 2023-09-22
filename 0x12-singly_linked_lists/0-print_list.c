#include "lists.h"

/**
 * print_list - printing lists
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *kev = h;
	size_t i = 0;

	while (kev != NULL)
	{
		if (kev->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] %s\n", kev->len, kev->str);
		}
		i++;
		kev = kev->next;
	}
	return (i);
}
