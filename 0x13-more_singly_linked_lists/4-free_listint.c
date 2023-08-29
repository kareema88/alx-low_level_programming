#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: the head of list
 */
void free_listint(listint_t *head)
{
	listint_t *k;


	while (head != NULL)
	{
		k = head;
		head = head->next;
		free(k);
	}
}
