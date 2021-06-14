/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** matchs
*/

#include "../test.h"

void false_match(param *info, int line)
{
    info->my_match = info->possible_match;
    for (int y = 0; y < info->my_match; y++)
        info->map[line][info->pos_line - info->first_bar - y] = ' ';
    my_printf(DEL_IA, info->my_match, line);
    display_map(info->map);
}

void good_match(param *info, int line)
{
    for (int y = 0; y < info->my_match; y++)
        info->map[line][info->pos_line - info->first_bar - y] = ' ';
    my_printf(DEL_IA, info->my_match, line);
    display_map(info->map);
}