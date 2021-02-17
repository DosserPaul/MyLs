/*
** EPITECH PROJECT, 2020
** LSv2
** File description:
** uid_gid
*/

#include <sys/types.h>
#include <pwd.h>
#include <grp.h>

#include "../my_printf/my_printf.h"

void uid(int nb)
{
    struct passwd *pw = getpwuid(nb);

    my_printf("%s ", pw->pw_name);
}

void gid(int nb)
{
    struct group *gr = getgrgid(nb);

    my_printf("%s ", gr->gr_name);
}