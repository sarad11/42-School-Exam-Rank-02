#include <stdlib.h>
#include <unistd.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_upper_counter(char *str)
{
    int     i;
    int     upper_counter;

    upper_counter = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper_counter++;
        i++;
    }
    return (upper_counter);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int     main(int argc, char **argv)
{
    int     len;
    int     i;
    int     j;
    int     upper_counter;
    char    *str;

    len = 0;
    i = 0;
    j = 0;
    if (argc == 2)
    {
        len = ft_strlen(argv[1]);
        upper_counter = ft_upper_counter(argv[1]);
        str = (char *)malloc((len + upper_counter + 1) * sizeof(char));
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                str[j] = '_';
                j++;
                str[j] = argv[1][i] + 32;
            }
            else
                str[j] = argv[1][i];
            i++;
            j++;
        }
        ft_putstr(str);
        free(str);
    }
    write(1, "\n", 1);
    return (0);
}