/*You can calculate every multiples of each integers until you have a common multiple other than 0*/
unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int    n;

    if (a == 0 || b == 0)
        return (NULL);
    if (a > b)
        n = a;
    else
        n = b;
    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return (n);
        n++;
    }
}

//You can use the HCF (Highest Common Factor) of these two integers*/
/*
unsigned int ft_gcd(unsigned int a, unsigned int b)
{
    while (b != 0) 
    {
        unsigned int    temp;
        
        temp = a % b;
        a = b;
        b = temp;
    }
    return (a);
}

unsigned int ft_lcm(unsigned int a, unsigned int b)
{
    unsigned int    gcd;
    int     result;
    
    if (a == 0 || b == 0 || a >= 2147483648 || b >= 2147483648)  
        return (0);
    gcd = ft_gcd(a, b);
    result = (a * b) / gcd;
    return (result);
}
*/