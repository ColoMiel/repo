/*
** EPITECH PROJECT, 2025
** utile
** File description:
** main
*/

#include "../lib/my/my.h"

int main(int argc, char **argv)
{
    int fd;
    char **data = malloc(sizeof(char *)* argc);

    if (argc != 3 && argc != 5)
        return 84;
    if (strcmp("-f", argv[1]) != 0)
        return 84;
    fd = open(argv[2], O_RDONLY);
    if (fd == -1)
        return 84;
    if (argc == 5) {
        if (strcmp("-s", argv[3]) != 0)
            return 84;
        if (is_digit(argv[4]) != 1)
            return 84;
    }
    data = &argv[1];
    if (algo(data) == 84)
        return 84;
}
