/*
** EPITECH PROJECT, 2020
** jso
** File description:
** ls_main
*/

#include "ls.h"
#include "my_printf.h"

int main(int ac, char **av)
{
    if (ac == 2 || ac == 3) {
        if (av[1][0] == '-')
            return flags(ac, av);
        if (av[1][0] != '-')
            return no_flag(av[1]);
    }

    if (ac == 1)
        // printf("%d\n\n", ac);
        return no_flag(".");
    


    return 0;
}