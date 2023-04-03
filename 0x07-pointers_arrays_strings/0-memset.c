#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to memory area
 * @b: Constant byte
 * @n: Number of bytes to fill
 *
 * Return: Pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
		p[i] = b;
	return (s);
}

