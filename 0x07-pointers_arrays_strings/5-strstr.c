#include <stddef.h>

/**
 * _strstr - Entry point
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	while (*haystack)
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		while (*haystack_ptr && *needle_ptr && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (!*needle_ptr)
			return (haystack);

		haystack++;
	}

	return (NULL);
}

