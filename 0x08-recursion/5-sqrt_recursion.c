#include "main.h"
int sqrt_calculation(int n, int i);
/**
 *_sqrt_recursion - function to get the square root of a number
 *@n: integer variable
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_calculation(n, 1));
}

/**
 *sqrt_calculation - sub-function 
 *@m: variable for comparison
 *@i: comparison variable
 *Return: square root of a number
 *
 */
int sqrt_calculation(int n, int i)
{
	int square;

	square = i * i;
	if (square == n)
		return (i);
	else if (square < n)
		return (sqrt_calculation(n, i + 1));
	else
		return (-1);
}

