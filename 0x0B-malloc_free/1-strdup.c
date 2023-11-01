#include "main.h"
#include "string.h"
/**
 *_strdup -  returns a pointer to a newly allocated space in memory
 *@str: pointer
 *Return: a.
 */
char *_strdup(char *str)
{
	char *a;
	if (str == NULL)
	{
		return (NULL);
	}
	a = strdup(str);
	return (a);
}
