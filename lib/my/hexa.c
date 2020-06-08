/*
** EPITECH PROJECT, 2019
** Epitech (Workspace)
** File description:
** main.c
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int printchar(int n)
{
    if (n == 10) {
        my_putchar('a');
    } else if (n == 11) {
        my_putchar('b');
    } else if (n == 12) {
        my_putchar('c');
    } else if (n == 13) {
        my_putchar('d');
    } else if (n == 14) {
        my_putchar('e');
    } else if (n == 15) {
        my_putchar('f');
    }
}

unsigned int dec_to_hex(int n)
{
    if (n >= 16)
        dec_to_hex(n / 16);
        if (n % 16 == 12)
            my_putchar('c');
        my_putchar(n % 16 + 48);
}

void mod_hex(va_list ap)
{
    dec_to_hex(va_arg(ap, int));
}