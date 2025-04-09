/*
** EPITECH PROJECT, 2025
** utile
** File description:
** main
*/

#include "../lib/my/my.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int algo(char **data)
{
    int fd = open(data[1], O_RDONLY);
    char *buff;

    read(fd, buff, sizeof(buff));
    printf("%s", buff);
}
