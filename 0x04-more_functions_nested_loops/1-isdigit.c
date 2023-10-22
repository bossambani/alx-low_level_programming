#include "main.h"
/**
 * main - checks for a digit value
 * Return: 1 if c is a digit
 * Return: 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
