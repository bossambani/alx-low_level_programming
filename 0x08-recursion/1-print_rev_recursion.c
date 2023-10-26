#include "main.h"
/**
 *_print_rev_recursion - function that prints string in reverse form
 *@s: pointer to a string
 *Return: 0;
 */
void _print_rev_recursion(char *s)
if (*s)
{
_putchar_recursion(s+1);
_putchar(*s);
}
