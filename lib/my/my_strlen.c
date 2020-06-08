/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}
