#include <unistd.h>

void    ft_putchar(char letter, int print_counter)
{
    while (print_counter > 0)
    {
        write(1, &letter, 1);
        print_counter--;
    }
}

int     main(int argc, char **argv)
{
    int     print_counter;
    int     i;

    print_counter = 0;
    i = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            print_counter = argv[1][i] - 96;
            ft_putchar(argv[1][i], print_counter);
        }
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            print_counter = argv[1][i] - 64;
            ft_putchar(argv[1][i], print_counter);
        }
        else
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}