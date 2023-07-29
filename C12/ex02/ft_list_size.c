#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
int     ft_list_size(t_list *begin_list)
{
    int count;
    t_list *ptr;

    count = 0;
    ptr = begin_list;
    while (ptr)
    {
        ptr = ptr->next;
        count++;
    }
    return (count);
}