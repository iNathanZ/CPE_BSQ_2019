/*
** EPITECH PROJECT, 2019
** Epitech (Workspace)
** File description:
** main.c
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

unsigned int dec_to_octal(unsigned int n)
{
    if (n >= 8) {
        dec_to_octal(n / 8);
    }
    my_putchar((n % 8) + '0');
    return (n);
}

unsigned int dec_to_bin(unsigned int n)
{
    if (n >= 2) {
        dec_to_bin(n / 2);
    }
    my_putchar((n % 2) + '0');
    return (n);
}

void mod_oct(va_list ap)
{
    dec_to_octal(va_arg(ap, int));
}

void mod_bin(va_list ap)
{
    dec_to_bin(va_arg(ap, int));
}
