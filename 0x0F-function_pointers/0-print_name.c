#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - Function that prints a name
 *@name: char string
 *@f function that take a string argument
 *Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
