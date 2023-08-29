#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the head of a list
 * @idx: index of the list where the new node is added
 * @n: n of the new node
 *
 * Return: the address of the node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *pres, *knode;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		pres = *head;
		for (k = 0; k < idx - 1 && pres != NULL; k++)
		{
			pres = pres->next;
		}
		if (pres == NULL)
			return (NULL);
	}
	knode = malloc(sizeof(listint_t));
	if (knode == NULL)
		return (NULL);
	knode->n = n;
	if (idx == 0)
	{
		knode->next = *head;
		*head = knode;
		return (knode);
	}
	knode->next = pres->next;
	pres->next = knode;
	return (knode);
}
