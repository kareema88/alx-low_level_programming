#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int k = 97;

	while (k <= 122)
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);

}
