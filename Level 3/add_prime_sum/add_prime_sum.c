#include <unistd.h>

int     ft_atoi(char *str)
{
    int     numb;
    int     i;
    int     sign;

    numb = 0;
    i = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        numb = (numb * 10) + str[i] - '0';
        i++;
    }
    return (numb * sign);
}

int     ft_is_prime(int numb)
{
    int     i;

    i = 2;
    if (numb == 1)
        return (0);
    while (i * i <= numb)
    {
        if (numb % i == 0)
            return (0);
        i++;
    }
    return(1);
}

void    ft_print_sum(int numb)
{
    char    digit;

    if (numb == 0)
        write(1, "0", 1);
    else
    {
        if (numb >= 10)
            ft_print_sum(numb / 10);
        digit = (numb % 10) + '0';
        write(1, &digit, 1);
    }
}

int     main(int argc, char **argv)
{
    int     numb;
    int     sum;

    numb = 0;
    sum = 0;
    if (argv[1])
        numb = ft_atoi(argv[1]);
    if (argc == 2 && numb && numb > 0)
    {
        while (numb > 0)
        {
            if (ft_is_prime(numb) == 1)
                sum += numb;
            numb--;
        }
        ft_print_sum(sum);
        write(1, "\n", 1);
        return (0);
    }
    write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}