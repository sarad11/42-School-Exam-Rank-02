#include <stdio.h>
#include <stdlib.h>

void    ft_get_prime_factors(int num)
{
    int     min_factor;
    int     delimiter;

    min_factor = 2;
    delimiter = 1;
    while (min_factor <= num)
    {
        if (num % min_factor == 0)
        {
            if (!delimiter)
                printf("*");
            printf("%d", min_factor);
            delimiter = 0;
            num /= min_factor;
        }
        else
            min_factor++;
    }
}

int     main(int argc, char **argv)
{
    int     num;

    num = 0;
    if (argc == 2)
    {
        num = atoi(argv[1]);
        if (num <= 0)
        {
            printf("\n");
            return (0);
        }
        else if (num == 1)
        {
            printf("1\n");
            return (0);
        }
        else
            ft_get_prime_factors(num);
    }   
    printf("\n");
    return (0);
}