#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL if insufficient memory
 * was available to allocate space for the new string.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *result, *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	p = result;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = '\0';

	return (result);
}
