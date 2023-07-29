#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list  *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list *temp;

    temp = begin_list;
    if (!cmp)
        return (NULL);
    while (temp != NULL)
    {
        if ((*cmp)(temp->data, data_ref) == 0)
            return(temp);
        temp = temp->next;
    }
    return (NULL);
}