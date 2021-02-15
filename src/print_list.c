/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/linked_list.h"
#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>

t_list *add_node(t_list *list_b, int value)
{
    t_list *temp = malloc(sizeof(t_list));
    temp->nb = value;
    temp->next = list_b;
    list_b = temp;

    return (list_b);
}

int list_a_is_sorted(t_list *list_a)
{
    t_list *temp = list_a;

    while (temp->next != NULL)
    {
        if (temp->nb > temp->next->nb)
            return (1);
        temp = temp->next;
    }
    return (0);
}

void display_link_list(t_list *list_a)
{
    t_list *t = list_a;

    while (t) {
        my_put_nbr(t->nb);
        t = t->next;
    }
        my_putstr("\n");
    }

void space_at_end_handler(t_list *list_a, t_list *list_b, int number)
{
    if (number == 0) {
    if (list_a->nb >= list_a->next->nb) {
        print_sabis(list_a);
    }
    else
        print_pbbis(&list_a, &list_b);
    }
}

int print_list(t_list *list_a, t_i *number)
{
    t_list *list_b = NULL;
    t_list *tmp = list_a;

    space_at_end_handler(list_a, list_b, number->i);
    while (tmp != NULL && tmp->next != NULL)
    {
        print_sa(list_a);
        print_pb(&list_a, &list_b);
        tmp = tmp->next;
    }
    while (list_b != NULL)
    {
        print_pa(&list_a, &list_b);
    }
    if (list_a_is_sorted(list_a) == 1) {
        number->i++;
        print_list(list_a, number);
    }
    else {
        display_link(list_a);
        return (0);
    }
        return (0);
}