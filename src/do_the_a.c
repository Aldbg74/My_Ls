/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-myls-alexis.drago-beltran
** File description:
** do_the_a.c
*/

#include "../include/my.h"
#include "../include/my_ls.h"

int do_the_a(char *path)
{
    int i = 0;
    DIR *dir = opendir(path);
    struct dirent *entity;

    if (dir == NULL)
        return 84;
    entity = readdir(dir);
    while (entity != NULL) {
            mini_printf("%s  ", entity->d_name);
        entity = readdir(dir);
    }
    closedir(dir);
    return 0;
}
