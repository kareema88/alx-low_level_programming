#include "function_pointers.h"

/**
 * array_iterator - execute a function given
 * as a parameter on each element of an array
 * @array: array
 * @size: the size of array
 * @action: pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
	action(array[k]);
	}
}
