#include "lists.h"

/**
 * add_node - add a node at the beginning of a list
 * @head: pointer
 * @str: string
 * Return: the address of the new element, or null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *k;

	size_t d;

	k = malloc(sizeof(list_t));
	if (k == NULL)
		return (NULL);

	k->str = strdup(str);

	for (d = 0; str[d]; d++)
		;

	k->len = d;
	k->next = *head;
	*head = k;

	return (*head);
}
