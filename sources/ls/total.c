/*
** EPITECH PROJECT, 2020
** jso
** File description:
** total
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>

#include "../my_printf/my_printf.h"
#include "ls.h"

void total(char *path)
{
    struct dirent *entry;
    struct stat sb;
    DIR *dir;

    dir = opendir(path);
    int total_nb = 0;

    while (entry = readdir(dir)) {
        stat(entry->d_name, &sb);
        if (entry->d_name[0] != '.') 
            total_nb += sb.st_blocks;
    }

    my_printf("total %d\n", total_nb / 2);
}