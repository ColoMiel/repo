/*
** EPITECH PROJECT, 2025
** utile
** File description:
** main
*/

#include "../lib/my/my.h"

int algo(char **data)
{
    int fd = open(data[1], O_RDONLY);
    char *buff = malloc(sizeof(char) * 1000);
    char **every_line;

    read(fd, buff, 1000);
    every_line = my_str_to_word_array(buff);
    printf("%s", buff);
}
