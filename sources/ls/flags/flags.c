/*
** EPITECH PROJECT, 2020
** jso
** File description:
** flags
*/

#include "../ls.h"

int flags(int ac, char **av)
{
    if (ac == 3 && av[1][1] == 'l' && av[2][1] == '.')
        return flag_l(".");

    if (ac == 3 && av[1][1] == 'l' && av[2][0] != '-')
        return flag_l(av[2]);

    if (av[1][1] == 'l')
        return flag_l(".");
}