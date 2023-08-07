#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @c: charachter
 * @size: size of an array
 * Return: NULL if size = 0,a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
		return (0);

	for (k = 0; k < size; k++)
		ptr[k] = c;
	return (ptr);
}
