int         ft_is_in(char *str, char *s1)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] == *s1)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strpbrk(char *s1, const char *s2)
{
    int     result;
    char    *str;

    result = 0;
    str = (char *)s2;
    while (*s1 && str)
    {
        result =  ft_is_in(str, s1);
        if (result == 0)
            s1++;
        else if (result == 1)
            return (s1);
    }
    return (NULL);
}