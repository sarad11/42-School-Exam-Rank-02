#include <unistd.h>

int     main(void)
{
    char    letter;
    char    upper_letter;

    letter = 'z';
    while (letter >= 'a')
    {
        if ((int)letter % 2 != 0)
        {
            upper_letter = letter - 32;
            write(1, &upper_letter, 1);
        }
        else
            write(1, &letter, 1);
        letter--;
    }
    write(1, "\n", 1);
    return (0);
}