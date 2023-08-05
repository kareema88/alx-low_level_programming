#include <stdio.h>

/**
 * main - program that computes and prints
 * the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int k;
	int kd = 0;

	for (k = 0; k < 1024; k++)
	{
		if (k % 3 == 0 || k % 5 == 0)
			kd = kd + k;
	}
	printf("%d\n", kd);
	return (0);
}
