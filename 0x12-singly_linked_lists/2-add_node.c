#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *adding;

	adding = malloc(sizeof(list_t));
	if (adding == NULL)
		return (NULL);
	adding->str = strdup(str);

	adding->len = _strlen(str);
	adding->next = *head;
	*head = adding;

	return (adding);
}
