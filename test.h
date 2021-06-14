/*
** EPITECH PROJECT, 2021
** Mockup
** File description:
** Step 1 bootstrap
*/

#ifndef TEST_H_
#define TEST_H_

#include "./printf/bsprintf.h"
#include <unistd.h>
#include <pwd.h>
#include <sys/wait.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>

typedef int my_bool;
#define true 1
#define false 0
#define BUFF_SIZE   6042
#define H_L(s, c, size)     horizontal_line(s, c, size)
#define LOST    "You lost, too bad... !\n"
#define WIN    "I lost... snif... but I'll get you next time!!\n"
#define DEL_IA              "AI removed %d match(es) from line %d\n"
#define DEL_P               "Player removed %d match(es) from line %d\n"
#define ERROR_MATCH  "Error: you cannot remove more than %d matches per turn\n"
#define ERROR_LINE  "Error: this line is out of range\n"
#define ERROR_NUMBER    "Error: invalid input (positive number expected)\n"

typedef struct param_t
{
    char **map;
    int size;
    int line;
    int pos_line;
    int match;
    int height;
    int nb_bar;
    int max_match;
    int my_line;
    int my_match;
    int possible_match;
    int possible_line;
    int first_bar;
    int end;
    int is_ctrl;
}param;

void free_map(param *info);
void display_map(char **map);
char **malloc_dd(int size);
char *horizontal_line(char *str, char c, int size);
void add_bar(param *info);
void create_border(param *info);
int generate_map(char *str, param *info, char *max);
char **str_to_word_array(char *str);
void prompt(void);
void prompt_error_line(void);
void prompt_line(void);
void prompt_error_match(int nb);
void set_data(param *info);
void set_map(param *info);
void search_bar(param *info);
void prompt_match(void);
void prompt_max_match(int nb);
void prompt_nb(void);
void ia(param *info);
my_bool search_end_ia(char **map);
my_bool search_end_me(char **map);
void case_line_true(param *info);
my_bool check_bar(char **map, int line);
my_bool check_match(int max_match, int match);
void case_line_false(param *info);
void false_match(param *info, int line);
void good_match(param *info, int line);
int check_good_input(char **cmd);
int check_good_line(param *info);
int check_good_match(param *info);
int check_end(param *info);
void prompt_my_line(void);
void prompt_my_match(void);
int check_max_match(param *info);
void init_possible_match(param *info, char **map, int size, int line);
int input_match(char **cmd, char *buff, size_t len, param *info);
int input_line(char **cmd, char *buff, size_t len, param *info);
int my_match(char **cmd, param *info, size_t len, char *buff);
int input(char *buff, char **cmd, param *info);

#endif