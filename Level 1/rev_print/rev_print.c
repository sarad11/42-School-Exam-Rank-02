#include <unistd.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     main(int argc, char **argv)
{
    int     len;

    len = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    len = ft_strlen(argv[1]);
    while (len > 0 && argv[1][len - 1])
    {
        write(1, &argv[1][len - 1], 1);
        len--;
    }
    return (0);
}