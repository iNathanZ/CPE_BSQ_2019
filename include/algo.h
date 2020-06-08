/*
** EPITECH PROJECT, 2019
** Bootstrap - BQS
** File description:
**
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

int can_make_square(char **arr, int i , int j, int size, char const *filepath);
char **replace_by_x(char **arr, int bestx, int besty, int size);
char **algo(char **arr, int x, int y, char const *filepath);