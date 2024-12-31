#include <unistd.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putword(char *str, int len, int len_word)
{
    int     i;

    i = 0;
    while (i < len_word)
    {
       write(1, &str[len + i], 1);
        i++;
    }
}

int     main(int argc, char **argv)
{
    int     len;
    int     len_word;
    int     is_space;

    len = 0;
    len_word = 0;
    is_space = 0;
    if (argc == 2)
    {
        len = ft_strlen(argv[1]);
        while (len > 0 && argv[1][len - 1])
        {
            while (len > 0 && argv[1][len - 1] && (argv[1][len - 1] == ' ' || argv[1][len - 1] == '\t'))
                len--;
            if (is_space)
                write(1, " ", 1);
            while (argv[1][len - 1] && argv[1][len - 1] != ' ' && argv[1][len - 1] != '\t')
            {
                len--;
                len_word++;
            }
            ft_putword(argv[1], len, len_word);
            is_space = 1;
            len--;
            len_word = 0;
        }
    }
    write(1, "\n", 1);
    return (0);
}