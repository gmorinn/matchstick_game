/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** error
*/

#include "../test.h"

void prompt(void)
{
    my_printf("\nYour turn:\n");
}

void prompt_line(void)
{
    my_printf("Please select a number between 1 and 100");
}

void prompt_match(void)
{
    my_printf("Error: you have to remove at least one match\n");
}

void prompt_my_line(void)
{
    my_printf("Line: ");
}

void prompt_my_match(void)
{
    my_printf("Matches: ");
}