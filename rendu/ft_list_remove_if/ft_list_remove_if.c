#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (*begin_list == NULL ||  begin_list ==NULL)
        return;
    while(*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        t_list *tmp = *begin_list;
        *begin_list = (*begin_list)->next; // Kopf eins nach hinten verschieben
        free(tmp);
    }
    t_list *curr = *begin_list;
    while (curr && curr->next)
    {
        // Wir prüfen immer das NÄCHSTE Element
        if (cmp(curr->next->data, data_ref) == 0)
        {
            t_list *tmp = curr->next;
            curr->next = curr->next->next; // Das Element überspringen / Kette flicken
            free(tmp);                     // Element löschen
            // Kein 'curr = curr->next' hier, weil das NEUE nächste Element im nächsten 
            // Schleifendurchlauf direkt geprüft werden muss!
        }
        else
        {
            curr = curr->next; // Wenn alles passt, einfach weitergehen
        }
    }
}