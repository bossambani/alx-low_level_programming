#include "function_pointers.h"
/**
 *print_name - Function that prints a name
 *@name: char string
 *@f function that take a string argument
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}

