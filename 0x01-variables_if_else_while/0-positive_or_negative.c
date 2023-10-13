#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program to produce random numbers
 * Return: 0
 */
int main(void)
{
<<<<<<< HEAD
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if ( n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
=======
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
>>>>>>> c63e7337d2c322169123cf55619f8f562979be40
}
