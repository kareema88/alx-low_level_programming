#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t list
 * @head: the head of the list
 * Return: The head node's data (n) or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *knode;
	int k;

	if (*head == NULL)
		return (0);

	knode = *head;

	k = (*head)->n;

	*head = (*head)->next;

	free(knode);

	return (k);
}
