#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: Pointer
 * Return: number of elements
**/

size_t list_len(const list_t *h)
{
	unsigned int k = 0;

	while (h != NULL)
	{
		h = h->next;
		k++;
	}
	return (k);
}
