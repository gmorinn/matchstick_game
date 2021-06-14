/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** set IA
*/

#include "../test.h"

my_bool check_bar(char **map, int line)
{
    for (int y = 0; map[line][y]; y++)
        if (map[line][y] == '|')
            return true;
    return false;
}

my_bool check_match(int max_match, int match)
{
    if (match < max_match)
        return true;
    else
        return false;
}

void ia(param *info)
{
    info->first_bar = 0;
    info->possible_line = 0;
    info->possible_match = 0;
    srandom(time(NULL));
    info->my_line = random() % info->height + 1;
    info->my_match = random() % info->max_match + 1;
    if (check_bar(info->map, info->my_line) == true)
        case_line_true(info);
    else
        case_line_false(info);
}