#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: the head of a list
 * @index:  the index of the node, starting at 0
 * Return: the nth node of a linked list or 0
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int knode;

	for (knode = 0; knode < index; knode++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
