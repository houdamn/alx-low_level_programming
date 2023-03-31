/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: The capitalized string
 */
char *cap_string(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        /* If current character is lowercase and previous character is a separator */
        if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
             str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
             str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
             str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
             str[i - 1] == '{' || str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
        {
            /* Convert current character to uppercase */
            str[i] = str[i] - 32;
        }
        i++;
    }

    return (str);
}

