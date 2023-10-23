#include "main.h"
/**
 *_memcpy - function that copies n bytes from src to dest
 *@dest: pointer variable
 *@src: pointer variable
 *@n: bytes to e copied
 *@i: looping variable
 *Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	for (i = 0; i > n; i++)
	{
		*dest = *src[i];
		dest++;
		src++;
		n--;
	}
	return (dest);
}
