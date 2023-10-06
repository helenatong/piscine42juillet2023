#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

/* Renvoie le n-ième élément de la liste
 * L'élément premier a pour indice 0
 * Si erreur, renvoyer ptr 0
*/
t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    int i;
    t_list *out;

    i = 0;
    if (begin_list == NULL)
        return (NULL);
    out = begin_list;
    while (i < nbr && out->next)
    {
        out = out->next;
        i++;
    }
    if (i == nbr)
        return (out);
    return (NULL);
}

