#include "list.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ascending(int a, int b)
{
	return (a <= b);
}


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int     aux;
    t_list  *first;
    
    first = lst;
    while(lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) != 0)
            lst = lst->next;
        else
        {
            aux = lst->data;
            lst->data = lst->next->data;
            lst->next->data = aux;
            lst = first;
        }
    }
    return (first);
}

int main(void)
{
    int     arr[7] = {3, 1, 6, 3, -5, 10, 0};
    int     i;
    t_list  *lst;
    t_list  *first;
    t_list  *follow;

    i = 1;
    lst = malloc(sizeof(t_list));
    if (!lst)
        return(0);
    lst->data = 3;
    first = lst;
    while (i < 7)
    {
        follow = malloc(sizeof(t_list));
        follow->data = arr[i];
        follow->next = NULL;
        lst->next = follow;
        lst = follow;
        i++;
    }
    lst = first;
    while (lst != NULL)
    {
        printf("%d, ", lst->data);
        lst = lst->next;
    }
    first = sort_list(first, &ascending);
    while (first != NULL)
    {
        printf("%d, ", first->data);
        first = first->next;
    }
    return (1);
}