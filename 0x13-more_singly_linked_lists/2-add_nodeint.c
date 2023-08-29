#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: the head of list
 * @n: nembers of element
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *knode = malloc(sizeof(listint_t));

	if (!head || !knode)
		return (NULL);

	knode->n = n;
	knode->next = NULL;

	if (*head)
		knode->next = *head;
	*head = knode;
	return (knode);
}
