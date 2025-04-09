/*
** EPITECH PROJECT, 2024
** my_isneg
** File description:
** my_isneg.c
*/

#include "my.h"

int my_strcmp(char *str1, char *str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
    return (str1[i] - str2[i]);
}

int my_strncmp(char *str1, char *str2, int n)
{
    int i = 0;

    while (i < n && str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
    if (i == n)
        return 0;
    return (str1[i] - str2[i]);
}

int my_strcmpchar(char str1, char str2)
{
    if (str1 != '\0' && str2 != '\0' && str1 == str2)
        return (str1 - str2);
    else
        return 1;
}
