/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_swap.c
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
