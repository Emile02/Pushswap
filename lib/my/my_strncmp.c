/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (s1[i] == '\0' && s2[i] == '\0')
        return (0);

    for (; i < n && s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] > s2[i])
            return (1);
        else
            return (-1);
    }

    return (0);
}
