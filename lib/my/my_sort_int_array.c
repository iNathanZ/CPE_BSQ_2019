/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_sort_int_array.c
*/

#include "my.h"

static void my_int_array_swap(int *array, int index);

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            my_int_array_swap(array, j);
        }
    }
}

static void my_int_array_swap(int *array, int index)
{
    if (array[index] < array[index + 1]) {
        return;
    }
    int temp = array[index];
    array[index] = array[index + 1];
    array[index + 1] = temp;
}
