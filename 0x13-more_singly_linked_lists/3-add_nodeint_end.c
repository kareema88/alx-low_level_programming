#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: the head of the list
 * @n: n of elements
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *knode;
	listint_t *pres;

	if (head == NULL)
		return (NULL);

	knode = malloc(sizeof(listint_t));

	if (knode == NULL)
		return (NULL);

	knode->n = n;
	knode->next = NULL;

	if (*head == NULL)
		*head = knode;
	else
	{
		pres = *head;
		while (pres->next != NULL)
			pres = pres->next;
		pres->next = knode;
	}

	return (knode);
}
