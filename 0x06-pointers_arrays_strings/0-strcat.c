#include "main.h"
#include <stdio.h>
/**
 * _strcat - function used to concatenate two strings
 *@src: pointer to the source string
 *@dest:  pointer to the destination string
 *Return: pointer to the resulting string dest
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
	return (result);
}
