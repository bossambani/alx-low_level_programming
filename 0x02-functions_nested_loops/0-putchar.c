#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program to print _putchar
 * Return: 0
 */
int main(void)
{
char _putchar[] = "_putchar";
int i;
for (i = 0; i < strlen(_putchar); i++)
{
putchar(_putchar[i]);
}
return (0);
}
