/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/linked_list.h"
#include "../include/my.h"
#include <stdlib.h>
#include <stdio.h>

void print_sa(t_list *list)
{
    int t;

    if (list->nb > list->next->nb && list->next != NULL)
    {
        t = list->nb;
        list->nb = list->next->nb;
        list->next->nb = t;
        //my_putstr(" sa");
    }
}

void print_pb(t_list **list_a, t_list **list_b)
{
    int t = (*list_a)->nb;

    if ((*list_a)->nb <= (*list_a)->next->nb)
    {
        *list_b = add_node(*list_b, t);
        (*list_b)->nb = t;
        //my_putstr(" pb");
        *list_a = (*list_a)->next;
    }
}

void print_pa(t_list **list_a, t_list **list_b)
{
    int t = (*list_b)->nb;

    *list_a = add_node(*list_a, t);
    (*list_a)->nb = t;
    //my_putstr(" pa");
    *list_b = (*list_b)->next;
}

void print_sabis(t_list *list)
{
    int t;

    if (list->nb > list->next->nb && list->next != NULL)
    {
        t = list->nb;
        list->nb = list->next->nb;
        list->next->nb = t;
        //my_putstr("sa");
    }
}

void print_pbbis(t_list **list_a, t_list **list_b)
{
    int t = (*list_a)->nb;

    if ((*list_a)->nb <= (*list_a)->next->nb)
    {
        *list_b = add_node(*list_b, t);
        (*list_b)->nb = t;
        //my_putstr("pb");
        *list_a = (*list_a)->next;
    }
}