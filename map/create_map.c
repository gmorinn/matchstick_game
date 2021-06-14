/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** create map
*/

#include "../test.h"

char *horizontal_line(char *str, char c, int size)
{
    int i;
    for (i = 0; i < size; i++)
        str[i] = c;
    str[i] = '\0';
    return str;
}

void add_bar(param *info)
{
    int x = info->size;
    for (int i = 0, y = 1; y <= info->size; i++, y++) {
        x = (info->size - i);
        for (; x < (info->size + i + 1); x++)
            info->map[y][x] = '|';
    }
}

void create_border(param *info)
{
    int size = info->size;
    info->height = 0;
    info->map[0] = H_L(info->map[0], '*', (size * 2) + 1);
    for (int i = 1; i < size + 1; i++) {
        info->map[i] = H_L(info->map[i], ' ', (size * 2) + 1);
        info->map[i][0] = '*';
        info->map[i][size * 2] = '*';
        info->height++;
    }
    info->map[size + 1] = H_L(info->map[size + 1], '*', (size * 2) + 1);
}

int generate_map(char *str, param *info, char *max)
{
    info->size = my_getnbr(str);
    info->max_match = my_getnbr(max);
    if (info->size < 1 || info->size > 100) {
        prompt_line();
        return 84;
    }
    if (is_number(str) == false || is_number(max) == false) {
        prompt_nb();
        return 84;
    }
    info->map = malloc_dd(info->size);
    create_border(info);
    add_bar(info);
    display_map(info->map);
    return 0;
}