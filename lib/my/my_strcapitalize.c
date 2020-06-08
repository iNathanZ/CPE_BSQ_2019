/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_strcapitalize.c
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] += 32;
        }
        if (str[i] < 'a' || 'z' < str[i]) {
            continue;
        }
        if (i == 0) {
            str[i] -= 32;
            continue;
        }
        char last = str[i - 1];
        if (last == ' ' || last == '+' || last == '-') {
            str[i] -= 32;
        }
    }
    return (str);
}
