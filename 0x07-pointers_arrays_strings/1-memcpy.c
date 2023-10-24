#include "main.h"
/**
 *_memcpy - function that copies n bytes from src to dest
 *@dest: pointer variable
 *@src: pointer variable
 *@n: bytes to e copied
 *@i: looping variable
 *Return: result.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *result;
	result = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (result);
}
