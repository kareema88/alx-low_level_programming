#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -  main function
 * @argc: arguments c
 * @argv: arguments v
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k, d, c;
	int (*o)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	k = atoi(argv[1]);
	d = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	o = get_op_func(op);
	c = o(k, d);

	printf("%d\n", c);
	return (0);
}
