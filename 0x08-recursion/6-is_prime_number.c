#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2) /* 0 and 1 are not prime */
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime
 * @n: the number to check
 * @i: the divisor to try
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n % i == 0 && n != i) /* n is divisible by i and i != n */
		return (0);
	else if (i > n / 2) /* we've tried all possible divisors */
		return (1);
	else
		return (check_prime(n, i + 1));
}
