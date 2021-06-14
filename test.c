/*
** EPITECH PROJECT, 2021
** readandwrite
** File description:
** test file
*/

#include "test.h"

int game(param *info, char *buff, char **cmd)
{
    int test;
    while (1) {
        test = input(buff, cmd, info);
        if (test != 84)
            break;
    }
    free_map(info);
    return info->end;
}

int main(int ac, char **av)
{
    if (ac != 3) {
        my_printf("\n");
        return 84;
    }
    param info;
    char **cmd = NULL;
    char *buff = NULL;
    info.end = 0;
    info.is_ctrl = 0;
    if ((generate_map(av[1], &info, av[2])) == 84)
        return 84;
    prompt();
    game(&info, buff, cmd);
    if (info.is_ctrl != 0)
        return 0;
    else if (info.end == 1 || info.end == 2)
        return info.end;
    return 0;
}