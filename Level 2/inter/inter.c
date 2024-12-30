#include <unistd.h>

void    ft_search_letter(char letter, char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] == letter)
        {
            write(1, &letter, 1);
            return;
        }
        i++;
    }
}

int     main(int argc, char **argv)
{
    int     i;

    i = 0;
    if (argc == 3 && argv[1] && argv[2])
    {
        while (argv[1][i])
        {
            ft_search_letter(argv[1][i], argv[2]);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}