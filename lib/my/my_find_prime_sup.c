/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_find_prime_sup.c
*/

#include "my.h"

int my_find_prime_sup(int n)
{
    if (n <= 2) {
        return (2);
    }
    while (1) {
        if (my_is_prime(n) == 1) {
            return (n);
        }
        n++;
    }
}
