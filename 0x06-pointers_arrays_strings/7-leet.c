#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i, j;
	char *leet = "aAeEoOtTlL44337011";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet[j]; j += 2)
		{
			if (str[i] == leet[j])
			{
				str[i] = leet[j + 1];
				break;
			}
		}
	}

	return (str);
}
