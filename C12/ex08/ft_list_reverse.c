#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>


/* Inverse l'ordre des différents éléments de la liste
*/

t_list    *ft_list_push_front(t_list **begin_list, t_list *to_add)
{
    if (*begin_list == NULL)
    {    
        *begin_list = to_add;
        return (*begin_list) ;
    }
    to_add->next = *begin_list;
    return(to_add);
}

void ft_list_reverse(t_list **begin_list)
{
   while (*begin_list != NULL)
   {
        begin_list = ft_list_push_front(begin_list, *begin_list->next);
        begin_list = *begin_list->next;
   }
}


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

t_list   *ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *list;
    
    list = ft_create_element(data);
    if (list)
    {
        if (*begin_list)
            list->next = *begin_list;
        *begin_list = list;
    }
    return (*begin_list);
}

t_list *ft_list_push_strs(int size, char **strs)
{
    t_list *out;
    t_list *list;
    int i;

    list = malloc(sizeof(t_list)); //Creation de la place pour les VA au sein des structures
    out = malloc(sizeof(t_list));
    if ((!list) || (!out))
        return (NULL);
    if (size == 0)
        return (NULL);
    list = ft_create_element(strs[0]);
    out = list;
    for (i = 1; i < size; i++)
        out = ft_list_push_front(&list, strs[i]);
    return (out);
}

//atttetion la liste est inversée ...
int main(int ac, char **av)
{
    t_list *out;
    char *str;
    out = ft_list_push_strs(ac - 2, av + 2);
    if (ac - 2 <= 0)
         printf("%p", out);
    else
    {
        out = ft_list_at(out, atoi(av[1]));
        str = out->data;
        printf("%s", str);
    }
}
