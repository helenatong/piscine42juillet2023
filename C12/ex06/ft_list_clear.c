#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

/*NOTE-- void ft_free (void *)) --*/
/* On utilise free_fct car data pourrait être un ptr de struct
 * c-a-d un simple free ne suffira pas.
 * pour free les adresses : 
    * creation d'un ptr qui sauvegarde l'adresse de l'elem suivant
    * free XX->next revient à free XX à la boucle d'après !!
    * il faut free tous les élém de la struct PUIS la struct elle-m
*/
void ft_list_clear(t_list *begin_list, void (*free_fct)(void*))
{
    t_list *ptr_downstream;

    ptr_downstream = begin_list;
    if (!free_fct)
        return ;
    while (ptr_downstream)
    {
        ptr_downstream = ptr_downstream->next;
        free_fct(begin_list->data);
        free(begin_list);
        begin_list = ptr_downstream;
    }
}