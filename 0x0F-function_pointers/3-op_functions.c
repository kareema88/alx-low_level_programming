#include "3-calc.h"

/**
 * op_add - add fnction
 * @a: num 1
 * @b: num 2
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subustruction function
 * @a: num 1
 * @b: num 2
 *  Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiblication function
 * @a: num 1
 * @b: num 2
 *  Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: num 1
 * @b: num 2
 *  Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulu function
 * @a: num 1
 * @b: num 2
 *  Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
