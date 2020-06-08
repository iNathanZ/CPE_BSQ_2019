/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my.h
*/

#include <stdarg.h>

#ifndef NULL
#define NULL (void *) 0
#endif

#ifndef MY_H
#define MY_H

void my_putchar(char c);
int my_isneg(int n);
int my_put_nbr(int n);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *array, int size);
int my_compute_power_rec(int n, int pow);
int my_compute_square_root(int n);
int my_is_prime(int n);
int my_find_prime_sup(int n);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *haystack, char const *needle);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int n);
void mod_char(va_list ap);
void mod_int(va_list ap);
void mod_str(va_list ap);
void mod_mod(va_list ap);
unsigned int dec_to_octal(unsigned int n);
unsigned int dec_to_bin(unsigned int n);
void mod_oct(va_list ap);
void mod_bin(va_list ap);
void mod_hex(va_list ap);
unsigned int dec_to_hex(int n);
int my_printf(char *s, ...);

#endif
