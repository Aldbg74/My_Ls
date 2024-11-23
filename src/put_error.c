/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-myls-alexis.drago-beltran
** File description:
** put_error
*/

#include "../include/my.h"
#include "../include/my_ls.h"

int my_putstrerr(char const *str)
{
    write(2, str, my_strlen(str));
    return 0;
}
