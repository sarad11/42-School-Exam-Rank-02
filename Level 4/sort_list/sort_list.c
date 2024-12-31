#include "list.h"

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *current;
    int     value;

    value = 0;
    current = lst;
    while (lst->next && list->next->next)
    {
        if (cmp(lst->data, list->next->data) == 0)
        {
            value = lst->data;
            lst->data = lst->next->data;
            lst->next->data = value;
            lst = current;
        }
        else
        {
            lst->list->next;
        }
    }
    return (current);
}