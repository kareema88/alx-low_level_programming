#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 * Return: 0 always
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else if (d  < 6 && d != 0)
	{
	printf("Last digit of %d is %d and is and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
