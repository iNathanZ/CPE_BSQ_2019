/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_strupcase.c
*/

#include "my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || 'z' < str[i]) {
            continue;
        }
        str[i] -= 32;
    }
    return (str);
}
