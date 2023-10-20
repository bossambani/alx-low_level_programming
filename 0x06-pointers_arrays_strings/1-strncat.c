#include "main.h"
#include <stdio.h>
/**
 *_strncat - Function for concatenating the strings
 *@dest: variable pointer
 *@src: variable pointer
 *@int n: bytes to be concatenated
 *Return: result.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		int i = strlen(src);
		for (n = 0; n >=i; n++)
		{
			*dest = *src;
			dest++;
			src++;
		}
		dest = '\0';
		return result;

}
