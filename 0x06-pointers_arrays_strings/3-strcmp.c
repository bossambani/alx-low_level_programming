#include "main.h"
#include <stdio.h>

/**
 *_strcmp - integer function that compare two srrings
 *@s1: input pointer
 *@s2: another input pointer
 *return: 1 if not equal otherwise return 0
 *
 *
 */

int _strcmp(char *s1, char *s2)
{
size_t i,j;
for (i = 0; i < strlen (s1); i++)
{
for (j = 0; j < strlen (s2); j++)
{
while (s1[i] != s2[i])
{
return (1);
}
return (0);
}
}
}
