#include <stdio.h>
#include <stdlib.h>

int     ft_pgcd(int a, int b)
{
    int     temp;

    while (b > 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return (a);
}
int     main(int argc, char **argv)
{
    if (argc == 3  && argv[1] > 0 && argv[2] > 0)
    {
        int     a;
        int     b;
        int     result;

        a = atoi(argv[1]);
        b = atoi(argv[2]);
        result = 0;
        result = ft_pgcd(a, b);
        printf("%d", result);
    }
    printf("\n");
    return (0);
}