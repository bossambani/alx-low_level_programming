#include <stdio.h>
#include <math.h>

/**
 *jump_search - Funtion to perform Jump Search
 *@array: pointer to the first element of the array to search in 
 *@size: number of elements in the array
 *@value: the value to search for
 *Return: the first index where value is located, or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	while (array[(step < size ? step : size) - 1] < value)
	{
		printf("Value checked array [%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			return (-1);
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, (step < size ? step : size));
	while (array[prev] < value)
	{
		printf("Value checked array [%ld] = [%d]\n", prev, array[prev]);
		prev++;

		if (prev == (step < size ? step : size))
			return (-1);
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
