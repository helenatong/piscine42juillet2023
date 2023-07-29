#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list  *ft_create_element(void *data)
{
    t_list *to_add;
    to_add = malloc(sizeof(t_list));

    if (to_add)
    {
        to_add->data = data;
        to_add->next = NULL;
    }
    return (to_add);
}

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

void    ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *ptr_last;
    t_list *to_add;

    to_add = ft_create_element(data);
    if (!to_add)
        return ;
    if (!(*begin_list))
        *begin_list = to_add;
    else
    {
        ptr_last = ft_list_last(*begin_list);
        ptr_last->next = to_add;
    }
}