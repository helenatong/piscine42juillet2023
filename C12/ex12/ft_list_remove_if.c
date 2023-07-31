#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

/* Fonction qui retire tous les éléments de la liste dont le résultat est 0 en passant par la fonction cmp
 * Le pointeur prev racolle la liste si un élément est retiré
 * Le pointeur now est utilisé pour free les éléments de la structure
 * Au début du while, now et post pointent vers l'élément N tandis que prev vers l'élément N-1 ou NULL
*/
void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *prev;
    t_list *now;
    t_list *post;

    prev = NULL;
    now = *begin_list;
    post = *begin_list;
    if (!cmp || !free_fct)
        return ;
    while (now)
    {
        post = post->next;
        if ((*cmp)(now->data, data_ref) == 0)
        {
            if (prev)
                prev->next = post;
            else
                *begin_list = post;
            free_fct(now->data);
            free(now);
        }
        else
            prev = now;
        now = post;
    }
}