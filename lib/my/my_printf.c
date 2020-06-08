/*
** EPITECH PROJECT, 2019
** Epitech (Workspace)
** File description:
** main.c
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int my_printf(char *s, ...)
{
    va_list ap;
    va_start (ap, s);

    void (*checkMod[4])(va_list ap) = { NULL };
    checkMod['d'] = &mod_int;
    checkMod['i'] = &mod_int;
    checkMod['s'] = &mod_str;
    checkMod['c'] = &mod_char;
    checkMod['o'] = &mod_oct;
    checkMod['%'] = &mod_mod;
    checkMod['b'] = &mod_bin;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            checkMod[s[i + 1]](ap);
            i++;
        } else
            my_putchar(s[i]);
        va_end(ap);
    }
}