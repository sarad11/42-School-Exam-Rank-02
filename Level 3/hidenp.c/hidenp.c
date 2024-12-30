#include <unistd.h>

int     ft_is_hiden(char *str1, char *str2)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (str2[j])
    {
        if (str1[i] == str2[j])
                i++;
        if (str1[i] == '\0')
            return (1);
        j++;
    }
    return (0);
}

int     main(int argc, char **argv)
{
    if (argc == 3)
    {
        if (ft_is_hiden(argv[1], argv[2]))
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}