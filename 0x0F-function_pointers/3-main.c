#include "3-calc.h"

/**
 * main -  main function
 * @argc: arguments c
 * @argv: arguments v
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int k, d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	k = (atoi(argv[1]));
	d = (atoi(argv[3]));
	printf("%d\n", op(k, d));
	return (0);
}
