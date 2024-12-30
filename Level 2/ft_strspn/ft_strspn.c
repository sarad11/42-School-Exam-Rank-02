int         ft_is_in(const char *accept, char letter)
{
    int     i;

    i = 0;
    while (accept[i])
    {
        if (accept[i] == letter)
            return (1);
        i++;
    }
    return (0);
}

size_t      ft_strspn(const char *s, const char *accept)
{
    int     j;
    int     result;
    int     counter;

    j = 0;
    counter = 0;
    while (s[j])
    {
        result = ft_is_in(accept, s[j]);
        if (result == 0)
            return (counter);
        else if (result == 1)
            counter++;
        j++;
    }
    return (counter);
}