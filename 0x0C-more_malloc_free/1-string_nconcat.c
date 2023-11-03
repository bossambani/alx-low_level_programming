#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: amount of bytes
 *
 * Return: pointer to the allocated memory.
 * If malloc fails, status value is equal to 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1, len2, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++);		;

	for (len2 = 0; s2[len2] != '\0'; len2++);
		
	if (n > len2)
		n = len2;

	lsout = len1 + n;

	s = malloc(lsout + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < len1)
			s[i] = s1[i];
		else
			s[i] = s2[i - len1];
	s[i] = '\0';

	return (s);
}

