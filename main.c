/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "include/my.h"
#include "include/linked_list.h"
#include <stdlib.h>
#include <stdio.h>

int display_link(t_list *list_a)
{
    t_list *p = list_a;

    while (p)
    {
        printf("%d ", p->nb);
        p = p->next;
    }
    printf("\n");
    return (0);
}

int usage(void)
    {
        my_putstr("Welcome !\n");
        my_putstr("   I will show you how to use my push_swap program\n");
        my_putstr("USAGE\n");
        my_putstr("     ./push_swap many int as want\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("    int → any number between -2147483648 and 2147483648\n");
        my_putstr("    -h  → show this usage\n");
        my_putstr("\n");
        my_putstr("Warning !if you fill argv with number, ");
        my_putstr("the programm will doesn't work :/\n");
        return (0);
    }

int in_order(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        my_putchar('\n');
        return (1);
    }
    for (i = 1; i < argc - 1 && (my_getnbr(argv[i]) <= my_getnbr(argv[i + 1]));
    i++);
    if (i == argc - 1)
    {
        my_putchar('\n');
        return (1);
    }
    return (84);
}

int error_handling(int argc, char **argv)
{
    if (argc == 1) {
        my_putstr("Pour plus d'informations, veuillez vous réféfez");
        my_putstr(" au Usage de ce programme (-h)\n");
        return (84);
    }
    for (int i = 1; i < argc; i++) {
        if (!(argv[i][0] == '-' || (argv[i][0] >= '0' && argv[i][0] <= '9')))
                return (84);
        for (int j = 1; argv[i][j] != '\0'; j++) {
            if (argv[i][j] < '0' || argv[i][j] > '9') {
                my_putstr("Veuillez vous réféfez au Usage de ce programme(-h)");
                my_putchar('\n');
                return (84);
            }
        }
    }
    return (0);
}

int main(int argc, char **argv)
{
    t_list *list_a;
    int i;
    list_a = NULL;
    t_i number = {0};
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h'
    && argv[1][2] == '\0') {
        usage();
        return (0);
    }
    if (error_handling(argc, argv) == 84)
        return (84);
    if (in_order(argc, argv) == 1)
        return (0);
    for (i = argc - 1; i >= 1; i--)
    {
        list_a = add_link(list_a, my_getnbr(argv[i]));
    }    
    print_list(list_a, &number);
    return (0);
}