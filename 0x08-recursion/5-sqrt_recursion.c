#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 * @val: int.
 * Return: Natural square root.
 */
int sqrt(int n, int val);
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - helper
 * @n: The input number.
 * @val: sqare root.
 * Return: int
 */

int sqrt(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (sqrt(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
