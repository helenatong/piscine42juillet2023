#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_list_last(t_list *begin_list)
{
    t_list *ptr;
    
    ptr = begin_list;
    if (!ptr)
        return (ptr);
    while (ptr->next)
        ptr = ptr->next;
    return (ptr);
}

void    ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
    t_list *temp; 

    temp = ft_list_last(*begin_list);
    if (!temp)
        *begin_list = begin_list2;
    else
        temp->next = begin_list2;
}
