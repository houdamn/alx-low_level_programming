#include "main.h"
/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	/* Get the length of dest */
	for (dest_len = 0; dest[dest_len]; dest_len++)
		;

	/* Copy src into dest starting from the end of dest */
	for (i = 0; i < n && src[i]; i++)
		dest[dest_len + i] = src[i];

	/* Null-terminate dest */
	dest[dest_len + i] = '\0';

	return (dest);
}

