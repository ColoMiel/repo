/*
** EPITECH PROJECT, 2025
** utile
** File description:
** main
*/

#include "../lib/my/my.h"
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int algo(char **data)
{
    int fd = open(data[1], O_RDONLY);
    char *buff = malloc(sizeof(char) * 1000);
    char **every_line;
    int grid = 8;

    read(fd, buff, 1000);
    every_line = my_str_to_word_array_delim(buff, '\n');
    if (data[2])
        grid = atoi(data[3]);
    for (int i = 0; every_line[i + 1] != NULL; i++) {
        printf("ligne %s\n", every_line[i]);
    }
    printf("taille grille = %d\n", grid);
}
