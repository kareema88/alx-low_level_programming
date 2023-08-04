#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argv: argument
 * @argc: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mult, k, d;

	if (argc == 3)
	{
		k = atoi(argv[1]);
		d = atoi(argv[2]);

		mult = k * d;
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
