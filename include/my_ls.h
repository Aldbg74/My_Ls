/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-myls-alexis.drago-beltran
** File description:
** my_ls.h
*/

#ifndef B_PSU_100_LYN_1_1_MYLS_ALEXIS_DRAGO_BELTRAN_MY_LS_H
    #define B_PSU_100_LYN_1_1_MYLS_ALEXIS_DRAGO_BELTRAN_MY_LS_H

    #include <unistd.h>
    #include <sys/stat.h>
    #include <sys/sysmacros.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <dirent.h>
    #include <pwd.h>
    #include <grp.h>
    #include <time.h>

typedef struct flags_s {
    int a;
    int l;
    int r;
    int d;
    int R;
    int t;
} flags_t;

typedef struct all {
    flags_t flags;
    char **path;
    int nb_return;
} all_t;

int do_the_a(char *path);
int print_base_ls(all_t all);
void path_analytic(all_t all);
int if_the_path_null(char *path);
int do_the_d(char *path);
int error_handling(all_t all);
int do_the_l(char *path);
int file_exist(char *folderpath, char *path);
int my_putstrerr(char const *str);

#endif //B_PSU_100_LYN_1_1_MYLS_ALEXIS_DRAGO_BELTRAN_MY_LS_H
