#include <stdlib.h>

int     ft_strlen(char *src)
{
    int     i;

    i = 0;
    while (src[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *str;
    int     len;
    int     i;

    i = 0;
    len = ft_strlen(src);
    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}