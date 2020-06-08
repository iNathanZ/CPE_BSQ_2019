/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_put_nbr.c
*/

#include "my.h"

int my_put_nbr(int n)
{
    if (n < 0) {
        my_putchar('-');
        if (n == -2147483648) {
            my_putchar('2');
            n = -147483648;
        }
        n *= -1;
    }
    if (n >= 10) {
        my_put_nbr(n / 10);
    }
    my_putchar((n % 10) + '0');
    return (0);
}
