/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int length = my_strlen(str);

    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return (str);
}
