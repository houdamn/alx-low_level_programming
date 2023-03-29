#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with first
 * @str: string to print
 */
void puts2(char *str)
{
	int i = 0;

	/* iterate through string and print every other character */
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

