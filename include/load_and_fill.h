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

char **mem_alloc_2d_array(int nb_rows, int nb_cols);
char* load_buffer_from_file(char const *filepath, int size, int x);
char **fill_2d_array_from_buffer(char **arr, char *buffer);