#include <libc.h>
#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list  *tmp;

    tmp = begin_list;

    while(begin_list)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}