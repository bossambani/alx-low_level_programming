#include "main.h"
/**
 *_put_recursion - recursive function for printing out a string
 *@s: pointer to a string
 *Return: 0
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
