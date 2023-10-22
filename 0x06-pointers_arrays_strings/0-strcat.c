#include "main.h"
#include <stdio.h>
/** _strcat - function used to concatenate two strings
 *@src: input pointer
 *@dest: input pointer
 *@result: output pointer
 *return: result.
 */

char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return result;
}
