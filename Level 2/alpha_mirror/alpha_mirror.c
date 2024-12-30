#include <unistd.h>

int     main(int argc, char **argv)
{
    char    letter;
    if (argc == 2)
    {
        int     i;

        i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1]    [i] <= 'z')
            {
                letter = 97 - argv[1][i] + 122;  
                write(1, &letter, 1); 
            }
            else if (argv[1][i] >= 'A' &&   argv[1][i] <= 'Z')
            {
                letter = 65 - argv[1][i] + 90;
                write(1, &letter, 1);
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}