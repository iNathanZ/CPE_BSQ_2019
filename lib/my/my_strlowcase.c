/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_strlowcase.c
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'A' || 'Z' < str[i]) {
            continue;
        }
        str[i] += 32;
    }
    return (str);
}
