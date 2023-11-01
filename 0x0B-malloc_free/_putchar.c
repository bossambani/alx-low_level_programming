#include <unistd.h>
/**
 *_putchar -writes the character c to the output
 *@c: The character to print
 *Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

