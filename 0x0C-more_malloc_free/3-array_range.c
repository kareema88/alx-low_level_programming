#include "main.h"

/**
 * *array_range - create an array of integers
 * @min: the min of intigers
 * @max: the max of integers
 *
 * Return: pointer, NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{	
	int len = max - min + 1;
	int *arr = malloc(sizeof(int) * len);
	int k;

	if (min > max)
		return (NULL);

	if (arr == NULL)
		return (NULL);
	for (k = 0; k < len ; k++)
	{
		arr[k] = min + k;
	}
	return (arr);
}
