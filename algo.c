/*
** EPITECH PROJECT, 2019
** Bootstrap - BQS
** File description:
**
*/

#include "include/size.h"
#include "include/load_and_fill.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "include/my.h"

int can_make_square(char **arr, int i , int j, int size, char const *filepath)
{
    for (int y = 0; y < size; y++) {
        for (int x = 0; x < size; x++) {
            if (arr[j + y][i + x] == 'o') {
                return (0);
            }
        }
    }
    return (1);
}

char **replace_by_x(char **arr, int bestx, int besty, int size)
{
    for (int i = 0 ; i < size ; i++) {
        for (int j = 0 ; j < size ; j++) {
            arr[besty + i][bestx + j] = 'x';
        }
    }
    return (arr);
}


char **algo(char **arr, int x, int y, char const *filepath)
{
    int size = 0;
    int i = 0;
    int j = 0;
    int bestx = 0;
    int besty = 0;

    for (i = 0 ; i < y ; i++) {
        for (j = 0 ; j < x ; j++) {
            if (i + size >= y || j + size >= x)
                continue;
            while (can_make_square(arr, j, i, size + 1, filepath) == 1) {
                bestx = j;
                besty = i;
                size++;
                if (i + size >= y || j + size >= x)
                    break;
            }
        }
    }
    replace_by_x(arr, bestx, besty, size);
    return (arr);
}
