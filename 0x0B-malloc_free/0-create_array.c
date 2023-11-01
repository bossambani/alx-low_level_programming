#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars, and initialize with specific char
 * @size: size of the array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */
char *create_array(unsigned int size, char c)
{
	char *c;
	unsigned int i;

	if (size == 0)
	
		return (NULL);
	c = malloc(size * sizeof(*c));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		c[i] = c;
	}
	return (c);
	

}
