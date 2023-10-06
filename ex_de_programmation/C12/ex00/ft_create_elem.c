#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

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
