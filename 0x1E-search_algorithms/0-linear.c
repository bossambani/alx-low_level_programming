#include <stdio.h>
/**
 *linear_search - searches for a value in an array of integers
 *@array: parameter for the array
 *@size: size of the array
 *@value: the target value to be searched in the given array
 *Return: index of the found value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
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
