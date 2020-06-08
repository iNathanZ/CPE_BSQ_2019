/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_compute_power_rec.c
*/

#include "my.h"

static int my_is_overflowed(int n, int pow);

int my_compute_power_rec(int n, int pow)
{
    if (my_is_overflowed(n, pow)) {
        return (0);
    }
    if (pow < 0) {
        return (0);
    }
    if (pow == 0) {
        return (1);
    }
    return (n * my_compute_power_rec(n, pow - 1));
}

static int my_is_overflowed(int n, int pow)
{
    int nb = 2147483647;
    for (int i = 0; i < pow; i++) {
        nb /= n;
        if (nb == 0) {
            return (1);
        }
    }
    return (0);
}
