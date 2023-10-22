#include "main.h"
/**
 * leet - encodes string into 1337
 * @n: input
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char si[] = "aAeEoOtTlL";
	char sj[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == si[j])
			{
				n[i] = sj[j];
			}
		}
	}
	return (n);
}
