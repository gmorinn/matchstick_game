/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** is number
*/

#include "bsprintf.h"

my_bool is_number(char *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] < '0' || str[i] > '9')
            return false;
    }
    return true;
}