/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** error
*/

#include "../test.h"

void prompt_error_line(void)
{
    my_printf(ERROR_LINE);
}

void prompt_nb(void)
{
    my_printf(ERROR_NUMBER);
}

void prompt_error_match(int nb)
{
    my_printf(ERROR_MATCH, nb);
}