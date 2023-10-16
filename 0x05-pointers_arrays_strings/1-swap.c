#include "main.h"

/**
 * 1-swap.c - program to work on(swpping variable values)
 * @ a and b : variables to be used
 * Return: Always (0).
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = *a;
}
