#include "main.h"
/**
 * print_most_numbers - Prints numbers less than 10 except 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}
