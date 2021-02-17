/*
** EPITECH PROJECT, 2020
** jso
** File description:
** no_flag
*/

#include <sys/types.h>
#include <dirent.h>

#include "../../my_printf/my_printf.h"

int no_flag(char *path)
{
    struct dirent *entry;
    DIR *dir;

    dir = opendir(path);
    if (dir == 0)
        return 84;

    for (int i = 0; entry = readdir(dir); i++) {
        if (entry->d_name[0] != '.') 
            my_printf("%s ", entry->d_name);
    }


    my_printf("\n");
    closedir(dir);

    return 0;
}