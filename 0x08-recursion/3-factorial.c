#include "main.h"
/**
 *factorial - Function that compute factorial
 *@n: Function paramenter
 *Return: -1 when n is less than zero
 *otherwise Return 1 when n is zero
 *otherwise Return the factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1);)
}

