/*
** EPITECH PROJECT, 2019
** Bootstrap - BQS
** File description:
**
*/

#include "include/size.h"
#include "include/load_and_fill.h"
#include "include/my.h"
#include "include/algo.h"

int main (int argc, char **argv)
{
    int i = 0;
    int nb_rows = get_y(argv[1]);
    int nb_cols = get_x(argv[1]);
    int size = size_map(argv[1]);
    char *buffer = load_buffer_from_file(argv[1], size, nb_cols);
    char **array = mem_alloc_2d_array(nb_rows, nb_cols);

    if (argc > 2)
        return (84);
    if (nb_rows == 8484)
        return (84);
    fill_2d_array_from_buffer(array, buffer);
    algo(array, nb_cols, nb_rows, argv[1]);
    while (array[i]) {
        my_putstr(array[i]);
        i++;
    }
    return (0);
}