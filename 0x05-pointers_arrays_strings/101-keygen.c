#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for the program 101-crackme
 *
 * Return: nothing
 */
int main(void)
{

	int krand;
	int d;
	int p;

	srand(time(NULL));
	for (d = 0, p = 3000; p > 100; d++)
	{
		krand = (rand() % 119) + 1;
		printf("%c", krand);
		p -= krand;
	}
	printf("%c", p);

	return (0);
}
