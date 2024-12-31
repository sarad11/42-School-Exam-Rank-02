#include <unistd.h>

int     main(int argc, char **argv)
{
    int     i;
    char    upper_letter;

    i = 0;
    if (argc == 2 && argv[1][0] != '\0')
    {
        if (argv[1][i] && (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
            write(1, &argv[1][i], 1);
        i++;
        while (argv[1][i])
        {
            if (argv[1][i] == '_')
            {
                i++;
                if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                {
                    upper_letter = argv[1][i] - 32;
                    write(1, &upper_letter, 1);
                }
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}