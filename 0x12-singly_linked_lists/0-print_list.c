#include "lists.h"

/**
 * print_list - printing lists
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		printf("\n");
		h = h->next;
		i++;`
	}
	return (i);
}
