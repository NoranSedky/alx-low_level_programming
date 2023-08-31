#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The input number.
 * @divisor: int.
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_helper(int n, int divisor);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}

/**
 * is_prime_helper - Checks if a number is a prime number.
 * @n: The input number.
 * @divisor: int.
 * Return: int.
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor >= n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, divisor + 1));
	}
}
