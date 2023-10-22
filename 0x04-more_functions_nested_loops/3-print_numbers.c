#include "main.h"
/**
 *print_numbers -functions that prints values less than 10
 *@i: variable
 *Return: value less than 10.
 */

void print_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n')
}

