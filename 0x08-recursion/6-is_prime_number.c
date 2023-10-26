#include "main.h"

int prime_calculation(int n, int i);
/**
 *is_prime_number - function to compute prime number
 *@n: integer to be used
 **Return: 1 if n is prime otherwise return 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_calculation(n, n - 1));
}

/**
 *prime_calculation - recursive function to calculate prime numbers
 *@n: variable to be calculated
 *@i: iteration variable
 *Return: 1 if n is prime otherwise return 0
 */
int prime_calculation(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (prime_calculation(n, i - 1));
}
