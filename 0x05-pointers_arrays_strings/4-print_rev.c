#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_rev -prints a string in reverse order
 *@str: variable used in the program
 *@s: function parameter
 *Return: Always (0).
 */
void print_rev(char *s)
{
int length = strlen(s);
int i;
for (i = length - 1; i >= 0; i--)
putchar (s[i]);

putchar ('\n');
}
