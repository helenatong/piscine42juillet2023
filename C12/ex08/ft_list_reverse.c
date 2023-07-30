#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>


/* Inverse l'ordre des différents éléments de la liste
*/

void ft_list_reverse(t_list **begin_list)
{
    t_list *prev;
    t_list *now;
    t_list *post;

    prev = NULL;
    if (!(*begin_list) || !begin_list)
        return ;
    now = *begin_list;
    post = *begin_list;
    while (post)
    {
        post = post->next;
        now->next = prev;
        prev = now;
        now = post;
    }
    *begin_list = prev;
}