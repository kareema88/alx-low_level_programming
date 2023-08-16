#include <stdio.h>
#include <stdlib.h>
/**
  *main - print the opcodes of main function
  *@argc: arguments c
  *@argv: argument v
  *Return: 0.
  */
int main(int argc, char *argv[])
{
	int k, d;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	d = atoi(argv[1]);
	if (d < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (k = 0; k < d; k++)
	{
		printf("%02hhx", *((char *)main + k));
		if (k  < d - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
