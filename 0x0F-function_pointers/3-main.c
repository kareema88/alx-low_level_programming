#include "3-calc.h"

/**
 * main -  main function
 * @argc: arguments c
 * @argv: arguments v
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *op;
	int k, d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = (argv[2]);
	k = (atoi(argv[1]));
	d = (atoi(argv[3]));

	if (get_op_func(op) == NULL || op[1] !='\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && d == 0) || (*op == '%' && d == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(k, d));
	return (0);
}
