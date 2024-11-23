/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-myls-alexis.drago-beltran
** File description:
** my_ls.c
*/

#include "include/my.h"
#include "include/my_ls.h"
#include <stdlib.h>

void free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}

flags_t detect_the_flags(int ac, char **av)
{
    flags_t flags2 = {0, 0, 0, 0, 0};

    for (int i = 0; av[i] != NULL; i++) {
        flags2.a = (av[i][0] == '-' && av[i][1] == 'a') ? 1 : flags2.a;
        flags2.l = (av[i][0] == '-' && av[i][1] == 'l') ? 1 : flags2.l;
        flags2.r = (av[i][0] == '-' && av[i][1] == 'r') ? 1 : flags2.r;
        flags2.d = (av[i][0] == '-' && av[i][1] == 'd') ? 1 : flags2.d;
        flags2.R = (av[i][0] == '-' && av[i][1] == 'R') ? 1 : flags2.R;
        flags2.t = (av[i][0] == '-' && av[i][1] == 't') ? 1 : flags2.t;
    }
    return flags2;
}

char **detect_the_path(int ac, char **av)
{
    char **detect_the_paths;
    int i = 0;
    int size = 0;
    int vari = 0;

    for (i = 1; av[i] != NULL; i++) {
        if (av[i][0] != '-')
            size++;
    }
    if (size == 0)
        return NULL;
    detect_the_paths = malloc(sizeof(char *) * (size + 1));
    for (i = 1; av[i] != NULL; i++) {
        if (av[i][0] != '-') {
            detect_the_paths[vari] = my_strdup(av[i]);
            vari++;
            }
    }
    detect_the_paths[vari] = NULL;
    return detect_the_paths;
}

int main(int ac, char **av)
{
    all_t the_mess;
    int path;

    the_mess.flags = detect_the_flags(ac, av);
    the_mess.nb_return = 0;
    the_mess.path = detect_the_path(ac, av);
    print_base_ls(the_mess);
    free(the_mess.path);
    return the_mess.nb_return;
}
