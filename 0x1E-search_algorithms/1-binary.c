#include <stdio.h>
/**
 *binary_search - searches for a value in a sorted array of integers
 *@array: Pointer to the first element of the array to search in
 *@size: Number of elements in the array
 *@value: The value to search for
 *Return: The index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int i;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			printf(" %d", array[i]);
			if (i < high)
			{
				printf(",");
			}
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
