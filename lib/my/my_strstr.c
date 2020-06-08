/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_strstr.c
*/

#include "my.h"

char *my_strstr(char *haystack, char const *needle)
{
    if (needle[0] == '\0') {
        return (haystack);
    }
    for (int i = 0; haystack[i] != '\0'; i++) {
        if (haystack[i] != needle[0]) {
            continue;
        }
        int j = 0;
        while (1) {
            if (needle[j] == '\0') {
                return (haystack + i);
            }
            if (haystack[i + j] != needle[j]) {
                break;
            }
            j++;
        }
    }
    return (0);
}
