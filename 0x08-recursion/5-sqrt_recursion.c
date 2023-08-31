#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 * @val: int.
 * Return: Natural square root.
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - helper
 * @n: The input number.
 * @val: sqare root.
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
