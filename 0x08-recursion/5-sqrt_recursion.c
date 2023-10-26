#include "main.h"
int sqrt_calculation(int n, int i);
/**
 *_sqrt_recursion - function to get the square root of a number
 *@n: integer variable
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
        return (-1);
	return  sqrt_calculation((n, 0));
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
int sq;
sq = i * i;
if (sq == n)
{
return (i);
}
if (sq < n)
{
return (sqrt_calculation(n, i+1));
}
return (-1);
}

