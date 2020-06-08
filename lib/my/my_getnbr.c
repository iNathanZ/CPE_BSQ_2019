/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_getnbr.c
*/

#include "my.h"

static int my_get_sign(char const *str);
static int my_get_index(char const *str);
static int my_get_length(char const *str, int index);
static int my_is_overflowed(char const *str, int index, int length, int sign);

int my_getnbr(char const *str)
{
    if (!str) {
        return (0);
    }
    int index = my_get_index(str);
    int length = my_get_length(str, index);
    int sign = my_get_sign(str);
    if (length == 0)
        return (0);
    if (my_is_overflowed(str, index, length, sign) == 1)
        return (0);
    if (my_is_overflowed(str, index, length, sign) == 2)
        return (-2147483648);
    int result = 0;
    for (int i = 0; i < length; i++) {
        result = (result * 10) + (str[index + i] - '0');
    }
    return (result * sign);
}

static int my_get_sign(char const *str)
{
    int sign = 1;

    for (int i = 0; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '+') {
            continue;
        }
        sign *= -1;
    }
    return (sign);
}

static int my_get_index(char const *str)
{
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        i++;
    }
    return (i);
}

static int my_get_length(char const *str, int index)
{
    int length = 0;

    while ('0' <= str[index] && str[index] <= '9') {
        index++;
        length++;
    }
    return (length);
}

static int my_is_overflowed(char const *str, int index, int length, int sign)
{
    if (length < 10)
        return (0);
    if (length > 10)
        return (1);
    char *max = "2147483647";
    char *min = "2147483648";
    for (int i = 0; i < 10; i++) {
        if (sign == 1 && str[index + i] > max[i])
            return (1);
        if (sign == -1 && str[index + i] < min[i])
            return (1);
        if (sign == -1 && i == 9 && str[index + 9] == '8')
            return (2);
    }
    return (0);
}
