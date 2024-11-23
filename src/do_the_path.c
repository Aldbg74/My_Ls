/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-myls-alexis.drago-beltran
** File description:
** do_the_path
*/

#include "../include/my.h"
#include "../include/my_ls.h"
#include <stdio.h>

int do_the_next_path(all_t all, int i)
{
    if (all.flags.a == 0 && all.flags.l == 1 && all.flags.r == 0 &&
        all.flags.R == 0 && all.flags.d == 0 && all.flags.t == 0) {
            do_the_l(all.path[i]);
    }
    if (all.flags.R == 1 || all.flags.r == 1 || all.flags.t == 1)
        return 84;
    return 0;
}

void path_analytic(all_t all)
{
    int i = 0;

    for (i = 0; all.path[i] != NULL; i++) {
        if (file_exist(".", all.path[i]) && all.path[i][0] != '/') {
            my_putstrerr("my_ls: cannot access '");
            my_putstrerr(all.path[i]);
            my_putstrerr("': No such file or directory\n");
            all.nb_return = 84;
        }
        if (all.flags.a == 1 && all.flags.l == 0 && all.flags.r == 0 &&
        all.flags.R == 0 && all.flags.d == 0 && all.flags.t == 0)
            do_the_a(all.path[i]);
        if (all.flags.a == 0 && all.flags.l == 0 && all.flags.r == 0
        && all.flags.R == 0 && all.flags.d == 0 && all.flags.t == 0)
                if_the_path_null(all.path[i]);
        if (all.flags.a == 0 && all.flags.l == 0 && all.flags.r == 0 &&
            all.flags.R == 0 && all.flags.d == 1 && all.flags.t == 0)
                do_the_d(all.path[i]);
        do_the_next_path(all, i);
    }
}
