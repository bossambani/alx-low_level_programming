#include "main.h"
/**
 * _isupper - A function that checks if a character is uppercase
 * @c: character to be checked
 * Return: returns 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
