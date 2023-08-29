#include "lists.h"
/**
  * print_listint - print all elements of a listint_t list
  * @h: the head
  * Return: the number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	int knode;

	knode = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		knode++;
	}

	return (knode);
}
