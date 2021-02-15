/*
** EPITECH PROJECT, 2020
** .h for pushswap
** File description:
** linked list
*/

#include "my.h"

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

typedef struct s_list t_list;

struct s_list {
    int nb;
    t_list *next;
};

typedef struct s_pushing t_pushing;

struct s_pushing {
    t_list *list_a;
    t_list *list_b;
};

typedef struct s_i t_i;

struct s_i {
    int i;
};

t_list *add_link(t_list *list, int nb);
int display_link(t_list *list_a);
int print_list(t_list *list_a, t_i *number);
void print_sa(t_list *list);
void print_pb(t_list **list_a, t_list **list_b);
void print_pa(t_list **list_a, t_list **list_b);
void print_sabis(t_list *list);
void print_pbbis(t_list **list_a, t_list **list_b);
void space_at_end_handler(t_list *list_a, t_list *list_b, int number);
t_list *add_node(t_list *list_b, int value);

#endif /*LINKED_LIST_H_*/