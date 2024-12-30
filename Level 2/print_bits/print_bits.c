#include <unistd.h>

void    print_bits(unsigned char octet)
{
    unsigned char rest;
    char    result[9] = "00000000";
    int     i = 7;
    
    rest = 0;
    while (octet > 0)
    {
        rest = octet % 2;
        octet = octet / 2;
        result[i] = rest + '0';
        i--;
    }
    i = 0;
    while (i < 8)
    {
       write(1, &result[i], 1);
       i++;
    }
}