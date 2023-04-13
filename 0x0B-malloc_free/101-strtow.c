#include <stdlib.h>
/**
 * Checks whether a given character is a space character (i.e. ' ' or '\t').
 *
 * @param ch The character to check.
 * @return 1 if the character is a space character, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (!in_word && !is_space(*str))
		{
			in_word = 1;
			count++;
		}
		else if (in_word && is_space(*str))
		{
			in_word = 0;
		}
		str++;
	}

	return (count);
}

int word_length(char *str)
{
	int length = 0;
	while (*str != '\0' && !is_space(*str))
	{
		length++;
		str++;
	}

	return (length);
}
char **strtow(char *str)
{
	char **words;
	int num_words, i, j;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	words = (char **) malloc(sizeof(char *) * (num_words + 1));
	
	if (words == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		while (is_space(*str))
			str++;
		words[i] = (char *) malloc(sizeof(char) * (word_length(str) + 1));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)

				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; *str != '\0' && !is_space(*str); j++, str++)
			words[i][j] = *str;

		words[i][j] = '\0';
	}

	words[num_words] = NULL;

	return (words);
}
