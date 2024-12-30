#include <unistd.h>

void    ft_print_numbers(void)
{
    char    numb;

    numb = '0';
    while (numb <= '9')
    {
        write(1, &numb, 1);
        numb++;
    }
}