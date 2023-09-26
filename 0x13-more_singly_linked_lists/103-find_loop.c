#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * Return: address of the node where the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bizzy, *kev;

	bizzy = kev = head;
	while (bizzy && kev && kev->next)
	{
		bizzy = bizzy->next;
		kev = kev->next->next;
		if (tortoise == kev)
		{
			bizzy = head;
			break;
		}
	}
	if (!bizzy || !kev || !kev->next)
		return (NULL);
	while (bizzy != kev)
	{
		bizzy = bizzy->next;
		kev = kev->next;
	}
	return (kev);
}
