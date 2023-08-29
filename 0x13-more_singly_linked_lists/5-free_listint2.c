#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *pres;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			pres = *head;
			*head = pres->next;
			free(pres);
		}
	}
}
