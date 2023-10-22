#include "main.h"
#include <stdio.h>
/**
 *_strncat - Function for concatenating two strings
 *@dest: variable pointer
 *@src: variable pointer
 *@int n: bytes to be concatenated
 *Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
