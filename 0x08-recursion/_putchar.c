#include <unistd.h>
/**
 *_putchar - writes the character c to standard output
 *@c: Character to be printed
 *Return: 1 on success
 *on error: -1 is returned, and error is set appropriately *
 */
int _putchar(char c)
{
	(write (1, &c, 1));
}
