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
    int     start;

    len = 0;
    start = 0;
    if (argc == 2)
    {
        len = ft_strlen(argv[1]);
        start = len - 1;;
        while (start >= 0  && (argv[1][start] == ' ' || argv[1][start] == '\t'))
            start--;
        while (start >= 0  && argv[1][start] != ' ' && argv[1][start] != '\t')
            start--;
        start++;
        while (argv[1][start] && argv[1][start] != ' ' && argv[1][start] != '\t')
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}