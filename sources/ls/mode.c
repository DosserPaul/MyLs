/*
** EPITECH PROJECT, 2020
** jso
** File description:
** mode
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include "../my_printf/my_printf.h"

void mode(struct stat sb)
{
    char mode_s[10];

    mode_s[0] = S_ISDIR(sb.st_mode) ? 'd' : '-';
    mode_s[1] = (sb.st_mode & S_IRUSR) ? 'r' : '-';
    mode_s[2] = (sb.st_mode & S_IWUSR) ? 'w' : '-';
    mode_s[3] = (sb.st_mode & S_IXUSR) ? 'x' : '-';
    mode_s[4] = (sb.st_mode & S_IRGRP) ? 'r' : '-';
    mode_s[5] = (sb.st_mode & S_IWGRP) ? 'w' : '-';
    mode_s[6] = (sb.st_mode & S_IXGRP) ? 'x' : '-';
    mode_s[7] = (sb.st_mode & S_IROTH) ? 'r' : '-';
    mode_s[8] = (sb.st_mode & S_IWOTH) ? 'w' : '-';
    mode_s[9] = (sb.st_mode & S_IXOTH) ? 'x' : '-';

    my_printf("%s ", mode_s);
}