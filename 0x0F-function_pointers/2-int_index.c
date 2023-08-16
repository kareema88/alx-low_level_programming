#include "function_pointers.h"

/**
*int_index - searches for an integer
*@array: Array
*@size: number of elements in the array
*@cmp: pointer to the function to compare values
*Return: -1 or pointer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

if (!(array) || !(cmp))
	return (-1);

for (k = 0; k < size; k++)
{
	if (cmp(array[k]) != 0)
	return (k);
}

return (-1);

}
