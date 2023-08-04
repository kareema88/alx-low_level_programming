#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int a, b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(a / 10 + 48);
			putchar(a % 10 + 48);
			putchar(' ');
			putchar(b / 10 + 48);
			putchar(b % 10 + 48);
			if (a < 98)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return	(0);
}
