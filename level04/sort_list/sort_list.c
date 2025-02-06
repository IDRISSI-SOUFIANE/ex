#include <libc.h>
#include "sort_list.h"



#include <stdio.h>
#include <stdlib.h>


// Function to compare two integers (ascending order)
int ascending(int a, int b)
{
    return (a <= b);
}

// Function to create a new list node
t_list *create_node(int data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Function to print the list
void print_list(t_list *head)
{
    while (head)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}


/**/
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tmp;
    int  tpdata;

    tmp = lst;
    while (lst && lst->next)
    {
        if (cmp(lst->data, lst->next->data) == 0)
        {
            tpdata = lst->next->data;
            lst->next->data = lst->data;
            lst->data = tpdata;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return lst;
}



/*
t_list		*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		overflow;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			overflow = lst->data;
			lst->data = lst->next->data;
			lst->next->data = overflow;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
*/


int main()
{
    // Creating a linked list: 3 -> 1 -> 2 -> 4 -> NULL
    t_list *head = create_node(3);
    head->next = create_node(1);
    head->next->next = create_node(2);
    head->next->next->next = create_node(10);
    head->next->next->next->next = create_node(-8);


    printf("Original list:\n");
    print_list(head);

    // Sorting the list
    head = sort_list(head, ascending);

    printf("Sorted list:\n");
    print_list(head);

    return 0;
}



