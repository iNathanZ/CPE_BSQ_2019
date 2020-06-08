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

int get_x(char const *filepath)
{
    int fd = 0;
    int x = 0;
    int y = 0;
    char buffer[8192];

    fd = open(filepath, O_RDONLY);
    while (read(fd, buffer + x, 1) == 1) {
    if (buffer[x] == '\n')
        y++;
    x++;
    }
    buffer[x] = '\0';
    x = x / y;
    x--;
    close(fd);
    return (x);
}

int get_y(char const *filepath)
{
    char *buffer2 = malloc(sizeof(char) * 1000);
    int b = 0;

    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return(8484);
    else {
        while (read(fd, buffer2 + b, 1) == 1) {
            if (buffer2[b] == '\n')
                break;
            b++;
        }
    }
    int y = my_getnbr(buffer2);
    return (y);

}

int size_map(char* param_one)
{
    char *fd = param_one;
    struct stat buf;

    stat(fd, &buf);
    int size = buf.st_size;
    return (size);
}
