#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int counter = 0;
	int i;

	for (counter = 0; counter < 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
