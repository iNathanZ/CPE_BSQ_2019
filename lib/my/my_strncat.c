/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_strncat.c
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int length = my_strlen(dest);
    int i = 0;

    for (; i < n && src[i] != '\0'; i++) {
        dest[length + i] = src[i];
    }
    dest[length + i] = '\0';
    return (dest);
}
