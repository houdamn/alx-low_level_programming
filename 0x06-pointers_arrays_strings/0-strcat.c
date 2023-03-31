/**
 * _strcat - concatenates two strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
		dest_end++;

	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	*dest_end = '\0';

	return (dest);
}
