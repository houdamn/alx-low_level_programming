/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	int low = 1; /* move declaration to the beginning */
	int high = n;
	int result = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	while (low <= high)
	{
		int mid = (low + high) / 2;
		int square = mid * mid;

		if (square == n)
		{
			result = mid;
			break;
		}
		else if (square < n)
		{
			low = mid + 1;
			result = mid;
		}
		else
		{
			high = mid - 1;
		}
	}
	return ((result * result == n) ? result : -1);
}
