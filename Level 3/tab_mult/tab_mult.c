#include <unistd.h>

int     ft_atoi(char *str)
{   
    int     i;
    int     sign;
    int     numb;

    i = 0;
    sign = 1;
    numb = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        numb = (numb * 10) + (str[i] - '0');
        i++;
    }
    return (numb * sign);
}

void    ft_putnbr(int numb)
{
    char    c;

    if (numb / 10 > 0)
        ft_putnbr(numb / 10);
    c = (numb % 10) + '0';
    write(1, &c, 1);
}

void    ft_tab_mult(int numb)
{
    int     i;
    int     mult;
    char    c;

    i = 1;
    mult = 0;
    while (i < 10)
    {
        c = i + '0';
        write(1, &c, 1);
        write(1, " x ", 3);
        ft_putnbr(numb);
        write(1, " = ", 3);
        mult = i * numb;
        if (mult >= 10)
            ft_putnbr(mult);
        else
        {
            c = mult + '0';
            write(1, &c, 1);
        }
        write(1, "\n", 1);
        i++;
    }
}

int     main(int argc, char **argv)
{
    int     numb;
    if (argc == 2)
    {
        numb = ft_atoi(argv[1]);
        if (numb <= 0)
            return (0);
        ft_tab_mult(numb);
    }
    else 
        write(1, "\n", 1);
    return (0);
}