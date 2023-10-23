#include "main.h"
/**
 *_memset - function that fils memory
 *@s: a pointer to the memory area
 *@n: bytes of memory to be filled
 *@: constant byte
 *Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
