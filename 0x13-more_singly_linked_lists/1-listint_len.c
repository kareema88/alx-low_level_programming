#include "lists.h"
/**
  * listint_len - returns the number of elements ina linked listint_t list.
  * @h: the head
  * Return: the number of elements
  */
size_t listint_len(const listint_t *h)
{
	int knode;

	knode = 0;
	while (h != NULL)
	{
		h = h->next;
		knode++;
	}

	return (knode);
}
