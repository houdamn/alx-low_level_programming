#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if @s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0, i;

	/* Find length of string */
	while (s[len] != '\0')
		len++;

	/* Compare characters from both ends */
	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}

	return (1);
}

