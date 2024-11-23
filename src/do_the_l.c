/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-myls-alexis.drago-beltran
** File description:
** do_the_l
*/

#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <time.h>
#include <string.h>
#include "../include/my.h"
#include "../include/my_ls.h"

int do_the_l_1(char *path)
{
    struct stat file_stat;
    struct passwd *pwd;
    struct group *grp;
    char time_str[100];
    DIR *dir = opendir(path);
    struct dirent *entity;

    return 0;
}

int do_the_l(char *path)
{
    int i = 0;
    DIR *dir = opendir(path);
    struct dirent *entity;

    if (dir == NULL)
        return 84;
    entity = readdir(dir);
    while (entity != NULL) {
        entity = readdir(dir);
        do_the_l_1(path);
    }
    closedir(dir);
    return 0;
}
