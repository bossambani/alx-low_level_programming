#include "main.h"
#include <string.h>
/**
 *
 *
 *
 *
 */
int is_palindrome(char *s)
{
	int left =0;
	int right = strlen(s) -1;

	while (left < right)
	{
		if(s[left] != s[right])
		{
			return (0);
		}
		left++;
		right--;
	}
	return (1);
}
