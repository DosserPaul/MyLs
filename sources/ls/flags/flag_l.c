/*
** EPITECH PROJECT, 2020
** jso
** File description:
** flag_l
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <time.h>

#include "../../my_printf/my_printf.h"
#include "../ls.h"

void datee(char *str)
{
    for (int a = 4; a != 16; a++)
        my_putchar(str[a]);
    my_putchar(' ');
}

static int ls_print(struct stat sb)
{
    mode(sb);
    my_printf("%l ", sb.st_nlink);
    uid(sb.st_uid);
    gid(sb.st_gid);
    my_printf("%l ", sb.st_size);
    datee(ctime(&sb.st_mtime));
}

int flag_l(char *path)
{
    struct dirent *entry;
    struct stat sb;
    DIR *dir;

    dir = opendir(path);
    if (dir == 0)
        return 84;

    total(path);
    while (entry = readdir(dir)) {
        stat(entry->d_name, &sb);

        if (entry->d_name[0] != '.') {
            ls_print(sb);
            my_printf("%s ", entry->d_name);
            my_printf("\n");
        }
    }
    closedir(dir);
    return 0;
}