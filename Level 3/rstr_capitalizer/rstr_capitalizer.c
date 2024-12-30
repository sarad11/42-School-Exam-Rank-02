#include <unistd.h>

void    ft_print_argument(char *str)
{
    int     i;
    char    letter;

    i = 0;
    while (str[i])
    {
        if ((str[i]) && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                letter = str[i] - 32;
                write(1, &letter, 1);
            }
            else 
                write(1, &str[i], 1);
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                letter = str[i] + 32;
                write(1, &letter, 1);
            }
            else
                write(1, &str[i], 1);
        }
        i++;
    }
}

int     main(int argc, char **argv)
{
    int     i;

    i = 1;
    if (argc > 1)
    {
        while (argv[i])
        {
            ft_print_argument(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}