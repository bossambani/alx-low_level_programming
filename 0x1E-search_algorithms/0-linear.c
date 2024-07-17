#include <stdio.h>
/**
 *linear_search - searches for a value in an array of integers
 *@array: parameter for the array
 *@size: size of the array
 *@value: the target value to be searched in the given array
 *Return: 0
 */
int linear_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	return (-1);
	}
	return (0);
}
