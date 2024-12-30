#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int     main(int argc, char **argv)
{
    int     numb1;
    int     numb2;
    char    operator;
    int     result;

    numb1 = 0;
    numb2 = 0;
    operator = '\0';
    result = 0;
    if (argc == 4)
    {
        numb1 = atoi(argv[1]);
        numb2 = atoi(argv[3]);
        result = 0;
        operator = argv[2][0];
        if (numb1 && numb2 && operator)
        {
            if (operator == '+')
                result = numb1 + numb2;
            else if (operator == '-')
                result = numb1 - numb2;
            else if (operator == '*')
                result = numb1 * numb2;
            else if (operator == '/')
                result = numb1 / numb2;
            else if (operator == '%')
                result = numb1 % numb2;
            printf("%d\n", result);
            return (0);
        }
    }
    write(1, "\n", 1);
    return (0);
}