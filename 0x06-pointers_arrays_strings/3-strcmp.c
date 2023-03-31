/**
 * _strncpy - copies a string
 * @dest: the buffer to copy the string to
 * @src: the string to be copied
 * @n: the maximum number of bytes to copy
 *
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

