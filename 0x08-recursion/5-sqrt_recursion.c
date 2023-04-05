#include "main.h"

/**
 * _sqrt_helper - Computes the natural square root of a number recursively
 *
 * @n: The number to compute the square root of
 * @i: The current guess for the square root
 *
 * Return: The natural square root of n
 */
int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Computes the natural square root of a number
 *
 * @n: The number to compute the square root of
 *
 * Return: The natural square root of n
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	sqrt = _sqrt_helper(n, n / 2);
	return (sqrt);
}

/**
 * _sqrt_helper - Computes the natural square root of a number recursively
 *
 * @n: The number to compute the square root of
 * @i: The current guess for the square root
 *
 * Return: The natural square root of n
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i == 0)
		return (-1);
	else
		return (_sqrt_helper(n, i - 1));
}
