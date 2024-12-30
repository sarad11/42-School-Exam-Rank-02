#include <unistd.h>

int     main(int argc, char **argv)
{
    int     i;
    int     word_started;

    i = 0;
    word_started = 0;
    if (argc == 2 && argv[1][0])
    {
        while (argv[1][i])
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            if (argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                if (argv[1][i])
                {
                    if (word_started)
                        write(1, " ", 1);
                    word_started = 1;
                }
                while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}