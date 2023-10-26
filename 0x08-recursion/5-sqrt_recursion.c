#include "main.h"
/**
 *_sqrt_recursion - function to get the square root of a number
 *@n: integer variable
 *Return: square root
 */
int _sqrt_recursion(int n)
{
return (sqrt_calculation(n,1));
}

/**
 *sqrt_calculation - sub-function 
 *@m: variable for comparison
 *@i: comparison variable
 *Return: square root of a number
 *
 */
int sqrt_calculation(int m, int i)
{
int sq;
sq = i * i;
if (sq == m)
{
return (i);
}
if (sq < m)
{
return (sqrt_calculation(m, i+1));
}
return (-1);
}

