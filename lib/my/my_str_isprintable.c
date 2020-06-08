/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_str_isprintable.c
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    if (!(*str)) {
        return (0);
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (' ' <= str[i] && str[i] <= '~') {
            continue;
        }
        return (0);
    }
    return (1);
}
