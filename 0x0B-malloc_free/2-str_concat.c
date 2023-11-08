#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatinates strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1, l2;
	char *concat;

	i = 0;
	l1 = 0;
	l2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		l1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		l2++;
	}

	concat = malloc(sizeof(char) * (l1 + l2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		concat[i] = s1[i];
	}

	for (i = 0; i < l2; i++)
	{
		concat[i + l1] = s2[i];
	}
	concat[i + l1] = '\0';
	return (concat);
}

