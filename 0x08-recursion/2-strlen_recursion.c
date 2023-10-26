#include "main.h"
#include <string.h>
/**
 *_strlen_recursion - function to output length of a string
 *@s: string pointer
 *Return: length
 *
 */
int _strlen_recursion(char *s)
{
int length;
length = 0;
if (*s == '\0')
return (0);
length = 1 + _strlen_recursion(s + 1);
return (length);
}
