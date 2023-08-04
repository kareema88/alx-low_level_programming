#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int k, d = 0, coin = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (k = 0; k < 5; k++)
		{
			if (coin >= cents[k])
			{
				d = d + coin / cents[k];
				coin = coin % cents[k];
				if (coin % cents[k] == 0)
				{
					break;
				}

			}

		}
		printf("%d\n", d);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}



