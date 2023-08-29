#include "lists.h"

/**
 * sum_listint - return the sum of all the data (n) of linked list
 * @head: the head of a list.
 * Return: sum of all the data (n) or NULL if empty
 */

int sum_listint(listint_t *head)
{
	int tot = 0;

	while (head)
	{
		tot += head->n;
		head = head->next;
	}

	return (tot);
}
