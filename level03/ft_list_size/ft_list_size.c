#include <unistd.h>
#include <libc.h>
#include "ft_list_size.h"


/*

t_list  *ft_lstnew(int data)
{
    t_list  *new;

    new = (t_list *)malloc (sizeof(t_list));
    if (!new)
        return (NULL);
    new->data = data;
    new->next = NULL;
    return (new);
}

t_list  *ft_lstlast(t_list *head)
{
    t_list  *tmp;

    tmp = head;
    while (tmp->next)
        tmp = tmp->next;
    return (tmp);
}

void    ft_lstaddback(t_list **lst, t_list *new)
{
    if (!lst || !*lst)
        return ;
    if (*lst)
        ft_lstlast(*lst)->next = new;
    else
        *lst = new;
}

int main()
{
    t_list *head;
    int data;

    data = 5;

    if (!head)
        head = ft_lstnew(data);
    else
        ft_lstaddback(head, ft_lstnew(data));
    
}
*/




int	ft_list_size(t_list *begin_list)
{
    int count;

    count = 0;
    if (begin_list)
    {
        while (begin_list)
        {
            begin_list = begin_list->next;
            count++;
        }
    }
    return (count);
}