/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_str_isupper.c
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            continue;
        }
        return (0);
    }
    return (1);
}
