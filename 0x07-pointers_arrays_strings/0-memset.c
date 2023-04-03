#include <stddef.h>
/**
 * _memset - Entry point
 * @s: pointer to the memory area to fill
 * @b: the constant byte to fill the memory area with
 * @n: the number of bytes to fill
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
