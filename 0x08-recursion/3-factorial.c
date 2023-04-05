/**
 * factorial - returns the factorial of a given number
 * @n: the number whose factorial to compute
 *
 * Return: the factorial of @n
 *         -1 if @n is negative
 *         1 if @n is 0
 */
int factorial(int n)
{
	if (n < 0) /* error case */
		return (-1);
	else if (n == 0) /* base case */
		return (1);
	else /* recursive case */
		return (n * factorial(n - 1));
}

