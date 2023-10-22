#include "main.h"
/**
 * print_numbers - Prints numbers less than 10
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
		_putchar(i + '0');
		}
	}
	_putchar('\n');
}

