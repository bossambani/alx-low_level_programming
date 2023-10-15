#include <stdio.h>
#include <string.h>
/**
 * main - A program to print alphabets
 * Return: 0
 */
int main(void)
{
char alphabet = "abcdefghijklmnopqrstuvwxyz\n";
int i;
for (i = 0; i < strlen(alphabet); i++)
{
putchar(alphabet[i]);
}
return (0);
}
