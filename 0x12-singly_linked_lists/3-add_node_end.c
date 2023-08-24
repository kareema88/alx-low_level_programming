#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string
 * Return: address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *k;
	int len;
	list_t *elm, *d;

	elm = malloc(sizeof(list_t));
	if (elm == NULL)
		return (NULL);

	k = strdup(str);
	if (str == NULL)
	{
		free(elm);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	elm->str = k;
	elm->len = len;
	elm->next = NULL;

	if (*head == NULL)
		*head = elm;
	else
	{
		d = *head;
		while (d->next != NULL)
			d = d->next;
		d->next = elm;
	}
	return (*head);
}
