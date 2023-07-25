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
	for (d = 0, p = 2772; p > 122; d++)
	{
		krand = (rand() % 125) + 1;
		printf("%c", krand);
		p -= krand;
	}
	printf("%c", p);

	return (0);
}
