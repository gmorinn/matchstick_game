/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** first case
*/

#include "../test.h"

void case_line_true(param *info)
{
    init_possible_match(info, info->map, info->pos_line, info->my_line);
    if (check_match(info->possible_match, info->my_match))
        good_match(info, info->my_line);
    else
        false_match(info, info->my_line);
}