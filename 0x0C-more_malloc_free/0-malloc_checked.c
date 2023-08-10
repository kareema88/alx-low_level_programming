#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: integer
 * Return: NULL or pointer
 */
void *malloc_checked(unsigned int b)
{

	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
