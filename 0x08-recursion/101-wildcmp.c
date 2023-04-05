/**
 * wildcmp - compare two strings, allowing for wildcard character *
 * @s1: the first string
 * @s2: the second string, which can contain *
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/* If the strings are equal, they match */
	if (*s1 == *s2 && *s1 == '\0')
		return (1);

	/* If s2 contains *, we need to recursively check all possible matches */
	if (*s2 == '*')
	{
		/* Try to match s1 with the rest of s2 (skip the *) */
		if (wildcmp(s1, s2 + 1))
			return (1);

		/* Try to match s1 with the rest of s2 and s1 (move s1 ahead) */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);

		/* None of the matches worked */
		return (0);
	}

	/* If the current characters match, move ahead in both strings */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* The characters don't match, so the strings don't match */
	return (0);
}
