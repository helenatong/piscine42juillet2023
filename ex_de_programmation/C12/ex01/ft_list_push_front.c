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

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *to_add;
    
    to_add = ft_create_element(data);
    if (!to_add)
        return ;
    if (*begin_list)
        to_add->next = *begin_list;
    *begin_list = to_add;
    //begin_list = &to_add;
}