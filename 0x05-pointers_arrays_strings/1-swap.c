#include "main.h"

/**
 * swap_int - program to work on(swpping variable values)
 * @a: variables to be used
 * @b: Variable to be used
 * Return: Always (0).
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
