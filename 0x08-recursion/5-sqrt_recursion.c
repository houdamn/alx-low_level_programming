#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	int i = 1, result = 1;
	if (n < 0)
		return -1;
	if (n == 0 || n == 1)
		return n;
	while (result <= n)
	{
		i++;
		result = i * i;
	}
	return (result == n) ? i : -1;
}

