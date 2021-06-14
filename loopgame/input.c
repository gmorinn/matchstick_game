/*
** EPITECH PROJECT, 2021
** readandwrite
** File description:
** test file
*/

#include "../test.h"

int input_match(char **cmd, char *buff, size_t len, param *info)
{
    prompt_my_match();
    if ((getline(&buff, &len, stdin)) == -1) {
        info->is_ctrl = 42;
        return info->is_ctrl;
    }
    cmd = str_to_word_array(buff);
    if ((check_good_input(cmd)) == 1)
        return input(buff, cmd, info);
    return my_getnbr(cmd[0]);
}

int input_line(char **cmd, char *buff, size_t len, param *info)
{
    prompt_my_line();
    if ((getline(&buff, &len, stdin)) == -1) {
        info->is_ctrl = 42;
        return info->is_ctrl;
    }
    cmd = str_to_word_array(buff);
    if ((check_good_input(cmd)) == 1)
        return input_line(cmd, buff, len, info);
    return my_getnbr(cmd[0]);
}

int input(char *buff, char **cmd, param *info)
{
    size_t len = len;
    info->line = input_line(cmd, buff, len, info);
    if (info->is_ctrl != 0)
        return info->is_ctrl;
    if ((check_good_line(info)) == 1)
        return input(buff, cmd, info);
    info->match = input_match(cmd, buff, len, info);
    if (info->is_ctrl != 0)
        return info->is_ctrl;
    set_data(info);
    search_bar(info);
    if ((check_good_match(info)) == 1)
        return input(buff, cmd, info);
    if (check_end(info) == 1)
        return info->end;
    prompt();
    return 84;
}