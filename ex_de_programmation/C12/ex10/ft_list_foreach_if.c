#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void    ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
    t_list *temp;

    temp = begin_list;
    if (!f)
        return ;
    while (temp != NULL)
    {
        if ((*cmp)(temp->data, data_ref) == 0)
            (*f)(temp->data);
        temp = temp->next;
    }
}