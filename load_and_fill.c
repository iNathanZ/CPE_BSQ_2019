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
#include "include/my.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    int i = 0;
    char **array = malloc(sizeof(char*) * nb_rows);
    for (i = 0 ; i < nb_rows ; i++) {
        char *line = malloc(sizeof(char) * nb_cols);
        //for (int j = 0 ; j < nb_cols ;j++);
        array[i] = line;
    }
    array[i] = NULL;
    return (array);
}

int open_fd(char const *filepath)
{
    char *buffer2 = malloc(sizeof(char) * 10);
    int fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        my_putstr("Open Failed\n");
        return (fd);
    }
    else {
        for (int b = 0 ; read(fd, buffer2 + b, 1) == 1 ; b++) {
            if (buffer2[b] == '\n')
                break;
        }
    }
    return (fd);
}

char* load_buffer_from_file(char const *filepath, int size, int size2, int x)
{
    char *buffer = malloc(sizeof(char) * x + 1);
    int a = -1;
    char *content = malloc(sizeof(int) * size);
    char *buffer2 = malloc(sizeof(char) * 10);
    int j = 0;

    int fd = open_fd(filepath);
    if (fd == -1)
        return NULL;
    while (a != 0) {
        a = read(fd, buffer, x);
        for (int i = 0 ; i < x ; i++) {
            content[j] = buffer[i];
            j++;
            buffer[a] = '\0';
        }
    }
    return (content);
}

char **fill_2d_array_from_buffer(char **arr, char *buffer)
{
    int i = 0;
    int k = 0;
    for (int j = 0 ; buffer[j] != '\0' ; j++) {
        arr[i][k] = buffer[j];
        k++;
        if (buffer[j] == '\n') {
            i++;
            k = 0;
        }
    }
    return (arr);
}
