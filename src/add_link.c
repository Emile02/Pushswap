/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/linked_list.h"
#include "../include/my.h"
#include <stdlib.h>

t_list *add_link(t_list *list, int nb)
{
    t_list *tmp;
    tmp = malloc(sizeof(t_list));

    if (tmp)
    {
        tmp->nb = nb;
        tmp->next = list;
    }
    return (tmp);
}