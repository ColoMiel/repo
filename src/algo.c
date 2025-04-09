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

    read(fd, buff, 1000);
    printf("%s", buff);
}
