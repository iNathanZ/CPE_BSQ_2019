/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_compute_square_root.c
*/

#include "my.h"

int my_compute_square_root(int n)
{
    if (n <= 0) {
        return (0);
    }
    int pow = 1;
    while (pow * pow != n) {
        pow++;
        if (pow > n || pow > 46340) {
            return (0);
        }
    }
    return (pow);
}
