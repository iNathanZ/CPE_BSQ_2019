/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_str_isalpha.c
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            continue;
        }
        if ('A' <= str[i] && str[i] <= 'Z') {
            continue;
        }
        return (0);
    }
    return (1);
}
