/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-myls-alexis.drago-beltran
** File description:
** error_handling
*/

#include "../include/my.h"
#include "../include/my_ls.h"

int file_exist(char *folderpath, char *path)
{
    DIR *dir = opendir(folderpath);
    struct dirent *entity = readdir(dir);

    while (entity != NULL) {
        if (my_strcmp(entity->d_name, path) == 0) {
            closedir(dir);
            return 0;
        }
        entity = readdir(dir);
    }
    closedir(dir);
    return 1;
}
