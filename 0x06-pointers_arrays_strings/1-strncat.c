#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to use from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	/* get the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* concatenate up to n bytes of src */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* add null terminator */
	dest[dest_len + i] = '\0';

	return (dest);
}


