#include <unistd.h>

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

int     ft_strlen(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}
int     ft_search_into_string(char *argv1, char *argv2)
{
    int     i;
    int     j;
    int     len;
    int     counter;

    i = 0;
    j = 0;
    len = ft_strlen(argv1);
    counter = 0;
    while (argv1[i])
    {
        while (argv2[j])
        {
            if (argv2[j] == argv1[i])
            {
                counter++;
                i++;
            }
            j++;
        }
        i++;
    }
    if (counter == len)
        return (1);
    return (0);
}

int     main(int argc, char **argv)
{
    int     result;

    result = 0;
    if (argc == 3)
    {
        result = ft_search_into_string(argv[1], argv[2]);
        if (result == 1)
            ft_putstr(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}