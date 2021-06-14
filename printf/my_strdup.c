/*
** EPITECH PROJECT, 2021
** lib
** File description:
** my_strdup
*/

#include "bsprintf.h"

char *my_strdup(char const *src)
{
    char *memory;
    int i = 0;

    while (src[i] != '\0')
        i = i + 1;

    memory = malloc(sizeof(char) * (i + 1));
    my_strcpy(memory, src);

    return (memory);
}