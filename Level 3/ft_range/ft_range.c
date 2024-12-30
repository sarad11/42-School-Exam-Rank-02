#include <stdlib.h>
#include <stdio.h>

int     ft_len_calculate(int start, int end)
{
    int     temp;
    int     len;

    temp = 0;
    len = 0;
    if (start == 0 && end == 0)
        len = 1;
    else if (start < 0 && end >= 0)
    {
        temp = -start;
        len = temp + end + 1;   
    }
    else if (start >= 0 && end < 0)
    {
        temp = -end;
        len = start + temp + 1;
    }
    else if (start < 0 && end < 0)
    {
        len = start + end - 1;
        len = -len;
    }
    else if (start > 0 && end > 0)
        len = start + end - 1;
    return (len);
}

int     *ft_range(int start, int end)
{
    int     len;
    int     *result;
    int     i;

    len = 0;
    i = 0;
    len = ft_len_calculate(start, end);
    result = (int *)malloc((len) * sizeof(int));
    if (!result)
        return (NULL);
    if (start == 0 && end == 0)
        result[0] = 0;
    else if (start < end)
    {
        while (i < len)
        {
            result[i] = start;
            start++;
            i++;
        }
    }
    else if (start > end)
    {
        while (i < len)
        {
            result[i] = start;
            start--;
            i++;
        }
    }
    return (result);
}