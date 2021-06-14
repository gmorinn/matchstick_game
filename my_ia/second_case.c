/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** first case
*/

#include "../test.h"

void init_possible_line(param *info)
{
    info->possible_line = info->my_line;
    while (!check_bar(info->map, info->possible_line)) {
        info->possible_line++;
        if (info->possible_line > info->size)
            info->possible_line = 1;
    }
}

void init_possible_match(param *info, char **map, int size, int line)
{
    info->first_bar = 0;
    while (map[line][size - info->first_bar] != '|')
        info->first_bar++;
    info->possible_match = 0;
    while (map[line][size - info->first_bar - info->possible_match] == '|')
        info->possible_match++;
}

void case_line_false(param *info)
{
    init_possible_line(info);
    init_possible_match(info, info->map, info->pos_line, info->possible_line);
    if (check_match(info->possible_match, info->my_match) == true)
        good_match(info, info->possible_line);
    else
        false_match(info, info->possible_line);
}