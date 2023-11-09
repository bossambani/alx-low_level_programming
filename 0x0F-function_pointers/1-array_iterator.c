#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function of array elements
 *@array: array of integers
 *@size: size pf array
 *@action: function pointer
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
