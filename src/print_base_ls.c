/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-myls-alexis.drago-beltran
** File description:
** print_base_ls.c
*/

#include "../include/my.h"
#include "../include/my_ls.h"
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int if_the_path_null(char *path)
{
    int i = 0;
    DIR *dir = opendir(path);
    struct dirent *entity;

    if (dir == NULL)
        return 84;
    entity = readdir(dir);
    while (entity != NULL) {
        if (entity->d_name[0] != '.')
            mini_printf("%s  ", entity->d_name);
        entity = readdir(dir);
    }
    my_putstr("\n");
    closedir(dir);
    return 0;
}

int print_base_ls(all_t all)
{
    int i = 0;

    if (all.path == NULL) {
        if_the_path_null(".");
    }
    if (all.path != NULL) {
        path_analytic(all);
    }
}
