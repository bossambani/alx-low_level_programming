#include "main.h"
#include <string.h>
/**
 *is_palindrome - a function that checks for palindromes
 *@s: the string to be checked
 *Return: 1 if palindrome else return 0
 */
int is_palindrome(char *s)
{
	int left = 0;
	int right = strlen(s) - 1;

	while (left < right)
	{
		if (s[left] != s[right])
		{
			return (0);
		}
		left++;
		right--;
	}
	return (1);
}
