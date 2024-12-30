#include "ft_list.h"

int     ft_list_size(t_list *begin_list)
{
    int     size;
    t_list *current;
    
    size = 0;
    if (!begin_list)
        return (0);
    current = begin_list;
    while (current)
    {
        current = current->next;
        size++;
    }
    return (size);
}