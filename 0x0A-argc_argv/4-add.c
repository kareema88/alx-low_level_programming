#include "stdio.h"
#include "stdlib.h"
/**
 * main - program that adds positive numbers
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k, digit, add;

	add = 0;

	for (k = 1; k < argc; k++)
	{
		for (digit = 0; argv[k][digit]; digit++)
		{
			if (argv[k][digit] < 48 || argv[k][digit] > 57)
			{
				printf("Error\n");
				return (1);
			}

		}
		add = add + atoi(argv[k]);

	}
	printf("%d\n", add);
	return (0);
}
