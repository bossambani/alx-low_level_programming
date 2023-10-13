#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to print _putchar
 * Return: 0
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (_putchar[i] != '\0')
	{
		putchar(_putchar[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
