#include <stdio.h>
/**
 *main - program that prints all arguments it receives
 *@argc: number of arguments passed to the program
 *@argv: pointer to argc
 *Return: Always 0.
 */
int main(int argc, char** argv)
{
	while (argc--)
		printf("%s\n" *argv++);
	return (0);
}

