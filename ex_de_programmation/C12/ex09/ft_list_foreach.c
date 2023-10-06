#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *temp;

    temp = begin_list;
    if (!f)
        return ;
    while (temp != NULL)
    {
        (*f)(temp->data);
        temp = temp->next;
    }
}