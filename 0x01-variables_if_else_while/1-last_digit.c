#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random number to the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num=n%10;

	if (num > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n,num);
	}
	else if (num == 0)
	{
		printf("last digit of %d is %d and is 0\n", n,num);
	}
	else if (num < 6 && !0)
	{
		printf("last digit of %d is %d is less than 6 and not 0\n",n,num);
	}
	
	return (0);
}
