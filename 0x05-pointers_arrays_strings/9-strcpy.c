#include "main.h"
#include <stdio.h>

/**
 **_strcpy - function used for copying a string of text
 *@dest: destination pointer
 *@src: source pointer
 *Return: s.
 */
char *_strcpy(char *dest, char *src)
{
char *s = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (s);
}
