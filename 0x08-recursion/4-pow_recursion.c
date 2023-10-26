#include "main.h"
/**
 *_pow_recursiion - function to get the power of integers
 *@y: power of a variable
 *@x: variable to get power
 *Return: power of a value
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (y == 1)
{
return (x);
}
return (x * _pow_recursion(x, y - 1));
}
