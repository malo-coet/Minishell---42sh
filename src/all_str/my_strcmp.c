/*
** EPITECH PROJECT, 2022
** Epitech_2022
** File description:
** my_strcmp.c
*/

#include "my.h"
#include "struct.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return 1;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
    }
    while (s1[i] != '\0' && s2[i] != '\0'){
        if (s1[i] > s2[i])
            return (1);
        else
            return (-1);
    }
    if (s1[i] == '\0' && s2[i] != '\0')
        return (-1);
    else if (s2[i] == '\0' && s1[i] != '\0')
        return (1);
    else
        return (0);
}
