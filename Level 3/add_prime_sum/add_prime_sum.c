#include <unistd.h>

int     ft_atoi(char *str)
{
    int     num;
    int     i;
    int     sign;

    num = 0;
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
        num = (num * 10) + str[i] - '0';
        i++;
    }
    return (num * sign);
}

int     ft_is_prime(int num)
{
    int     i;

    i = 2;
    if (num == 1)
        return (0);
    while (i * i <= num)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return(1);
}

void    ft_print_sum(int numb)
{
    char    digit;

    if (num == 0)
        write(1, "0", 1);
    else
    {
        if (num >= 10)
            ft_print_sum(num / 10);
        digit = (num % 10) + '0';
        write(1, &digit, 1);
    }
}

int     main(int argc, char **argv)
{
    int     num;
    int     sum;

    num = 0;
    sum = 0;
    if (argv[1])
        num = ft_atoi(argv[1]);
    if (argc == 2 && num && num > 0)
    {
        while (num > 0)
        {
            if (ft_is_prime(num) == 1)
                sum += num;
            num--;
        }
        ft_print_sum(sum);
        write(1, "\n", 1);
        return (0);
    }
    write(1, "0\n", 1);
    return (0);
}