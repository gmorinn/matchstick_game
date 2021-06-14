/*
** EPITECH PROJECT, 2020
** My functions
** File description:
** Functions for myprintf
*/

#include "bsprintf.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0'){
        i = i + 1;
    }
    return (i);
}

int my_put_nbr(int nb)
{
    if (nb < 0)
    {
        my_putchar('-');
        nb = nb*(-1);
    }

    if (nb >= 0 && nb <= 9)
    {
        my_putchar(nb + 48);
    }
    if (nb >= 10)
    {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }

    return (0);
}

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
