#include "main.h"
#include <stdio.h>
/**
 *_strcat - a function that concatenate two strings
 *@dest: input pointer
 *@src: input pointer
 *@result return pointer
 *Return: result
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
