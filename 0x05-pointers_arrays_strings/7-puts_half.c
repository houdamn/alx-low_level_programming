#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, length = 0, n;

	/* Determine the length of the string */
	while (str[length] != '\0')
		length++;

	/* Determine where to start printing the string */
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;

	/* Print the second half of the string */
	for (i = n; i < length; i++)
		putchar(str[i]);

	putchar('\n');
}

