#include "main.h"
/**
 *_strspn - program
 *@s: input
 *@accept: input
 *Return: Always 0 
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int t;

	while(*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if(*s == accept[t])
			{
				m++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
	
