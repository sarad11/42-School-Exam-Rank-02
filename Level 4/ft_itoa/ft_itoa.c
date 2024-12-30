#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    int     len;
    int     temp;
    int     negative;
    char    *str;
    

    len = 0;
    temp = nbr;
    negative = 0;
    if (nbr == -2147483648)
    {
         str = "-2147483648";
         return (str);
    }
    else if (nbr == 0)
        len = 1;
    else if (nbr < 0)
    {
        negative = 1;
        nbr = -nbr;
        temp = -temp;
    }
    while (temp > 0)
    {
        len++;
        temp = temp / 10;
    }
    len += negative;
    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[len] = '\0';
    len--;
    while (len >= negative)
    {
        str[len] = (nbr % 10) + '0';
        nbr /= 10;
        len--;
    }
    if (negative)
        str[0] = '-';
    return (str);
}