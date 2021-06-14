/*
** EPITECH PROJECT, 2020
** bsprintf
** File description:
** Prototypes of my_printf
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef int my_bool;
#define true 1
#define false 0
void my_putchar(char c);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_print_int(va_list *ap);
void my_print_char(va_list *ap);
void my_print_str(va_list *ap);
void my_print_hexa_upper(va_list *ap);
void my_print_hexa_lower(va_list *ap);
void my_print_pointer(va_list *ap);
void hexa_digit(int decimal);
void hexa_letter_lower(int decimal);
void hexa_letter_upper(int decimal);
void hexadecimal_lower(int decimal);
int my_strcmp(char *str1, char *str2);
void hexadecimal_upper(int decimal);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *src);
int my_getnbr(char const *str);
char *my_strdup(char const *src);
void pointer(int nb);
void octal(int nb);
void my_print_octal(va_list *ap);
int main_loop(char *src, va_list *ap, char *flag);
int find_print(char flag, char *src);
int my_printf(char *str, ...);
my_bool is_number(char *str);
