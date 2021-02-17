/*
** EPITECH PROJECT, 2020
** jso
** File description:
** ls
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#ifndef LS_H_
#define LS_H_

int no_flag(char *path);
int flag_l(char *path);
int flags(int ac, char **av);
void mode(struct stat sb);
void uid(int nb);
void gid(int nb);
void total(char *path);

#endif /* !LS_H_ */