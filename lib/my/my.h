/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** a
*/

#include <string.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <time.h>
#include <fcntl.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <errno.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Graphics/Rect.h>
#include <stdbool.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>
#include <getopt.h>

#ifndef MY_
    #define MY_

int my_strlen(char *str);
int is_digit(char *str);
char **my_str_to_word_array(char *str);
char **my_str_to_word_array_delim(char *str, char delim);
int my_strcmp(char *str1, char *str2);
int my_strncmp(char *str1, char *str2, int n);
void my_putchar(char c);
void my_putstr(char *str);
int my_str_to_int(char *str);
char *my_strdup(char *src);
void parsing(int argc, char **argv, char *content);
void characters(char *args, char *content);
int my_put_nbr(int nb);
int algo(char **data);

#endif /* MY_ */
