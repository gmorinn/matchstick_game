/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** create map
*/

#include "../test.h"

void free_map(param *info)
{
    for (int i = 0; i < (info->size + 2); i++)
        free(info->map[i]);
    free(info->map);
}

void display_map(char **map)
{
    for (int i = 0; map[i]; i++)
        my_printf("%s\n", map[i]);
}

char **malloc_dd(int size)
{
    int i;
    char **map = malloc(sizeof(char *) * (size + 5));
    for (i = 0; i < (size + 2); i++)
        map[i] = malloc(sizeof(char) * (size * 2) + 5);
    map[i] = NULL;
    return map;
}