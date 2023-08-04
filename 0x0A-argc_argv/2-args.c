#include <stdio.h>

/**
 * main - print all arguments
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	printf("%s\n", argv[k]);
	return (0);
}
