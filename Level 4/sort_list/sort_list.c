#include "list.h"
#include <stdlib.h>

t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list  *current;
    int     value;

    value = 0;
    if (!lst)
        return (NULL);
    current = lst;
    while (lst->next)
    {
        if (cmp(lst->data, lst->next->data) == 0)
        {
            value = lst->data;
            lst->data = lst->next->data;
            lst->next->data = value;
            lst = current;
        }
        else
        {
            lst = lst->next;
        }
    }
    return (current);
}