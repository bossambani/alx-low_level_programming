#include "main.h"
#include <stdlib.h>
/**
 *array_range - Creates an array of integers
 *@max: maximum variable
 *@min: minimum variable
 *Return: 0;
 */
int *array_range(int min, int max)
{
	int i, len, *ptr;

	if (min > max)
	{
		return (NULL);
	}

	len = (max - min) + 1;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
