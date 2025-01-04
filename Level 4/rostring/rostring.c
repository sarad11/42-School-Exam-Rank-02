#include <unistd.h>
#include <stdlib.h>

int     ft_avance_to_second_word_index(char *str)
{
    int     i;

    i = 0;
    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
    while (str[i] && (str[i] != ' ' && str[i] != '\t'))
            i++;
    return (i);
}

int    ft_print_rest_argument(char *str, int start)
{
    int     is_space = 0;
    int     printed = 0;
    while (str[start])
    {
        while (str[start] && (str[start] == ' ' || str[start] == '\t'))
            start++;
        if (str[start] && is_space)
            write(1, " ", 1);
        while (str[start] && (str[start] != ' ' && str[start] != '\t'))
        {
            write(1, &str[start], 1);
            start++;
            printed = 1;
        }
        is_space = 1;
    }
    return (printed);
}

void    ft_print_first_word(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t'))
        {
            write(1, &str[i], 1);
            i++;
        }
        if (str[i] == ' ' || str[i] == '\t')
            break;
    }
}

int     main(int argc, char **argv)
{
    int     i;

    i = 0;
    if (argc == 2)
    {
        i = ft_avance_to_second_word_index(argv[1]);
        if (ft_print_rest_argument(argv[1], i))
            write(1, " ", 1);
        ft_print_first_word(argv[1]);
    }
    else if (argc > 2)
        ft_print_first_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}