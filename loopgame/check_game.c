/*
** EPITECH PROJECT, 2021
** readandwrite
** File description:
** test file
*/

#include "../test.h"

int check_good_input(char **cmd)
{
    if (cmd[0] == NULL || cmd[1]) {
        return 1;
    }
    if (is_number(cmd[0]) == false) {
        prompt_nb();
        return 1;
    }
    return 0;
}

int check_good_line(param *info)
{
    if (info->line > info->height || info->line == 0) {
        prompt_error_line();
        return 1;
    }
    return 0;
}

int check_good_match(param *info)
{
    if (info->match < 1) {
        prompt_match();
        return 1;
    }
    if (info->match > info->nb_bar) {
        prompt_error_match(info->nb_bar);
        return 1;
    }
    return 0;
}

int check_end(param *info)
{
    set_map(info);
    if (!search_end_me(info->map)){
        my_printf(LOST);
        info->end = 2;
        return 1;
    }
    my_printf("\nAI's turn...\n");
    ia(info);
    if (!search_end_me(info->map)){
        my_printf(WIN);
        info->end = 1;
        return 1;
    }
    return 0;
}