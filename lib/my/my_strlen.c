/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** day 4, task 3
*/
#include "my.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        i++;
    }
    return i;
}
