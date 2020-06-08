/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_is_prime.c
*/

#include "my.h"

int my_is_prime(int n)
{
    if (n < 2) {
        return (0);
    }
    for (int i = 2; i <= (n / 2); i++) {
        if (n % i == 0) {
            return (0);
        }
    }
    return (1);
}
