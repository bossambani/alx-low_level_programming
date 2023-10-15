#include <stdio.h>
#include <string.h>
/**
 * main - A program that prints _putchar
 * Return: 0
 */
int main(void)
{
	char *_putchar = "_putchar\n";
	int i = 0;

	for (i = 0 ; i < strlen(func_putchar) ; i++)
	{
		putchar(func_putchar[i]);
	}
	return (0);
}
