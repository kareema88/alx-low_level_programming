#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destination
 * @src: charachter
 * @n: integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];

	}
	return (dest);
}

/**
 * *_realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: NULL or pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}


	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		_memcpy(p, ptr, old_size);
	if (new_size < old_size)
		_memcpy(p, ptr, new_size);

	free(ptr);
	return (p);
}
