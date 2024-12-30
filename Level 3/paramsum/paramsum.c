#include <unistd.h>

void    ft_print_integer(int numb)
{
    char    c;

    if (numb >= 10)
        ft_print_integer(numb / 10);
    c = (numb % 10) + '0';
    write(1, &c, 1);
}

int     main(int argc, char **argv)
{
    if (argv[1])
        ft_print_integer(argc - 1);
    else
        write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}