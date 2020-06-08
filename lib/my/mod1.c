/*
** EPITECH PROJECT, 2019
** Epitech (Workspace)
** File description:
** main.c
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

void mod_char(va_list ap)
{
    my_putchar(va_arg(ap, int));
}

void mod_int(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void mod_str(va_list ap)
{
    my_putstr(va_arg(ap, char*));
}

void mod_mod(va_list ap)
{
    my_putchar('%');
}