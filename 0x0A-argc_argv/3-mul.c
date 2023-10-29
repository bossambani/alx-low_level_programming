#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that prints number of arguments
 *@argc: number of arguments
 *@argv: pointer
 *Return: 0
 *
 */
int main(int argc, char* argv[])
{
	int i;
	int mult = 1;
	if (argc != 3))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		mult *= atoi(argv[i]);
	}
		printf("%d\n", mult);
	}
		return (0);	
}
