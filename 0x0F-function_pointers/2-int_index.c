#include <stdio.h>
/**
 *int_index - function
 *@array: int
 *@size: int
 *@cmp: func
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
