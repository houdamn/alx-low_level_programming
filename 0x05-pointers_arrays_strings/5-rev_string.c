#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	/* find the length of the string */
	for (j = 0; s[j] != '\0'; j++)
		;

	/* swap characters from beginning and end of string */
	for (i = 0; i < j / 2; i++)
	{
		temp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = temp;
	}
}

