#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of array
 * Rturn: 0
 */
void print_diagsums(int *a, int size)
{
	int k, sm1, sm2;

	sm1 = 0;
	sm2 = 0;

	for (k = 0; k < size ; k++)
	{
		sm1 = sm1 + a[k];
		sm2 = sm2 + a[size - k - 1];
		a = a + size;
	}
	printf("%d, %d\n", sm1, sm2);
}
