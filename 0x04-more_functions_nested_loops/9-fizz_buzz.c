#include <stdio.h>
/**
 *main - A function that print numbers from 1 to 100
 *For multiples of three prints Fizz,
 *For multiples of five prints Buzz,
 *For multples of both five and three prints FizzBuzz
 *Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
