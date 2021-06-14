/*
** EPITECH PROJECT, 2020
** Str to word array
** File description:
** Recode str to word array
*/

#include "../test.h"

int check_str(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else if (c >= '!' && c <= '.')
        return 1;
    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}

int calc_words(char *str)
{
    int y = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (check_str(str[i]))
            if (!check_str(str[i + 1]))
                y++;
    return y;
}

int lenght_one_word(char *str, int i)
{
    while (str[i] != '\0') {
        if (check_str(str[i]) != 1)
            return i;
        i++;
    }
    return i;
}

char **str_to_word_array(char *str)
{
    int lenght = calc_words(str);
    char **memory = malloc((1 + lenght) * sizeof(char *));
    int i = 0;
    int y = 0;
    int nb = 0;
    while (i < lenght) {
        nb = 0;
        while (check_str(str[y]) == 0)
            y++;
        memory[i] = malloc(sizeof(char *) * (lenght_one_word(str, y)) + 1);
        for (; str[y] != '\0' && (check_str(str[y])); y++, nb++)
            memory[i][nb] = str[y];
        memory[i][nb] = '\0';
        i++;
    }
    memory[i] = NULL;
    return (memory);
}