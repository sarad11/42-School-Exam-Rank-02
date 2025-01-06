#include <unistd.h>

int     ft_atoi(char *str)
{
    int     i;
    int     num;
    int     sign;

    i = 0;
    sign = 1;
    num = 0;
    while ((str[i]) && (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' || str[i] == ' ' || str[i] == '\f'))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i])
    {
        num = (num * 10) + str[i] - '0';
        i++;
    }
    return (num * sign);
}

void    ft_invert_putstr(char *hex, int i)
{  
    while (i >= 0)
    {
        {
            write(1, &hex[i], 1);
            i--;
        }
    }
}

void    ft_convert_to_hex(int numb)
{
    int     mod;
    int     i;
    char    hex[8];

    mod = 0;
    i = 0;
    while (num > 0)
    {
        mod = num % 16;
        if (mod < 10)
            hex[i] = (mod + '0');
        else if (mod == 10)
            hex[i] = 'a';
        else if (mod == 11)
            hex[i] = 'b';
        else if (mod == 12)
            hex[i] = 'c';
        else if (mod == 13)
            hex[i] = 'd';
        else if (mod == 14)
            hex[i] = 'e';
        else if (mod == 15)
            hex[i] = 'f';
        num = num / 16;
        i++;
    }
    hex[i] = '\0';
    i--;
    ft_invert_putstr(hex, i);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        int     num;

        num = ft_atoi(argv[1]);
        if (num == 0)
            write(1, "0", 1);
        else
            ft_convert_to_hex(num);
    }
    write(1, "\n", 1);
    return (0);
}