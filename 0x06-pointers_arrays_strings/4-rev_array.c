#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: integer
 * @n: number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int k, d, temp;

	d = n - 1;

	for (k = 0; k < n / 2; k++)
	{
	temp = a[k];
	a[k] = a[d];
	a[d] = temp;
	d--;
	}
}

