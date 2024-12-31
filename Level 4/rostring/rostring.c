#include <unistd.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int len;
    int i;

    len = 0;
    i = 0;
  
    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    while (str[i] && (str[i] != ' ' && str[i] != '\t'))
    {
        i++;
        len++;
    }
    return (len);
}

char    *ft_fill_word(char *str, int len)
{
    int     i;
    int     j;
    char    *word;

    i = 0;
    j = 0;
    word = (char *)malloc((len + 1) * sizeof(char));
    if (!word)
        return (NULL);
   
    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    while ((j < len) && str[i] && (str[i] != ' ' && str[i] != '\t'))
    {
        word[j] = str[i];
        i++;
        j++;
    }
    word[j] = '\0';
    return (word);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        int     is_space;
        int     i;
        int     first_word_len;
        char    *word;
        

        is_space = 0;
        i = 0;
        first_word_len = ft_strlen(argv[1]);
        word = ft_fill_word(argv[1], first_word_len);
        i = 0;
        // Move to past the first word, including any leading spaces
        while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
            i++;
        while (argv[1][i] && (argv[1][i] != ' ' || argv[1][i] != '\t'))
            i++;
        // Print the remaining words
        while (argv[1][i])
        {
            while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
            i++;
            if (is_space)
                write(1, " ", 1);
            while (argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            is_space = 1;
            i++;
        } 
        if (is_space)
            write (1, " ", 1);
        i = 0;
        // Print last word
        while (word[i])
        {
            write (1, &word[i], 1);
            i++;
        }
        free(word);
    }
    write(1, "\n", 1);
    return (0);
}