int     ft_strlen(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    char    temp;
    int     i;
    int     len;

    i = 0;
    len = ft_strlen(str);
    while (str[i] && i < len - 1)
    {
        temp = str[len - 1];
        str[len - 1] = str[i];
        str[i] = temp;
        i++;
        len--;
    }
    return (str);
}