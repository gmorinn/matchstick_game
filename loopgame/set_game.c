/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** set game
*/

#include "../test.h"

my_bool search_end_me(char **map)
{
    for (int i = 0; map[i]; i++){
        for (int y = 0; map[i][y]; y++)
            if (map[i][y] == '|')
                return true;
    }
    return false;
}

my_bool search_end_ia(char **map)
{
    for (int i = 0; map[i]; i++){
        for (int y = 0; map[i][y]; y++)
            if (map[i][y] == '|')
                return true;
    }
    return false;
}

void search_bar(param *info)
{
    for (int y = 0; info->map[info->line][y]; y++)
        if (info->map[info->line][y] == '|')
            info->nb_bar += 1;
}

void set_data(param *info)
{
    info->nb_bar = 0;
    info->pos_line = (info->size * 2);
}

void set_map(param *info)
{
    int i;
    for (i = 0; info->map[info->line][info->pos_line - i] != '|'; i++);
    for (int y = 0; y < info->match; y++)
        info->map[info->line][info->pos_line - i - y] = ' ';
    my_printf(DEL_P, info->match, info->line);
    display_map(info->map);
}