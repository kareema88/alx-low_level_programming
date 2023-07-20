#include <stdio.h>

/**
 * main -entry point
 * description: prints the numbers from 1 to 100,
 * But for multiples of three print Fizz instead
 * of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 && k % 5 != 0)
		{
			printf(" Fizz");
		} else if (k % 5 == 0 && k % 3 != 0)
		{
			printf(" Buzz");
		} else if (k % 3 == 0 && k % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (k == 1)
		{
			printf("%d", k);
		} else
		{
			printf(" %d", k);

		}
	}
	printf("\n");

	return (0);
}
