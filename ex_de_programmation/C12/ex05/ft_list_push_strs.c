#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list  *ft_create_element(void *data)
{
    t_list *elem;
    
    elem = malloc(sizeof(t_list));
    if (elem == NULL)
        return (NULL);
    elem->data = data;
    elem->next = NULL;
    return (elem);
}

t_list *ft_list_push_strs(int size, char **strs)
{
    t_list *out;
    t_list *elem;
    int i;

    i = 0;
    if (size <= 0 || *strs == NULL)
        return (NULL);
    out = NULL;
    while (i < size)
    {
        elem = ft_create_element(strs[i]);
        if (elem == NULL)
            return (out);
        elem->next = out;
        out = elem;
        i++;
    }
    return (out);
}