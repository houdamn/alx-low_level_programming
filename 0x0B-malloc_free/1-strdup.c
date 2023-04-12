#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as parameter.
 * @str: The string to be duplicated.
 *
 * Return: On success, a pointer to the duplicated string is returned.
 *         On failure, NULL is returned.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len, i;

	if (str == NULL)
		return (NULL);

	/* Find length of string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Allocate memory for duplicate string */
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	/* Copy string */
	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
