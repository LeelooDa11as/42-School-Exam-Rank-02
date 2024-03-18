/*
Allowed functions: malloc
Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.
A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.
Your function must be declared as follows:
char    **ft_split(char *str); */

#include <stdio.h>
#include <stdlib.h>

int is_space(char *str, int i)
{
    if(str[i] == ' ')
        return (1);
    if(str[i] == '\n')
        return (1);
    if(str[i] == '\t')
        return (1);
    return (0);
}

int ft_wc(char *str)
{
    int wc;
    int i;

    wc = 0;
    i = 0;
    while(str[i] != '\0')
    {
        if (i == 0 && (is_space(str, i) == 0))
            wc++;
        if (i > 0 && (is_space(str, i) == 0) && (is_space(str, i - 1) == 1))
            wc++;
        i++;
    }
    return (wc);
}

char    *ft_strncpy(char *s1, char *s2, int n)
{
    int i;

    i = 0;
    while(i < n && s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

char    **ft_split(char *str)
{
    char    **res;
    int     i;
    int     x;
    int     y;

    i = 0;
    y = 0;
    res = malloc(sizeof(char *) * (ft_wc(str) + 1));
    if (!res)
        return (NULL);
    while(str[i] != '\0')
    {
        while (is_space(str, i) == 1)
            i++;
        x = i;
        while (is_space(str, i) == 0 && str[i] != '\0')
            i++;
        if (x < i)
        {
            res[y] = malloc(sizeof(char) * (i - x + 1));
            if (!res[y])
                return (NULL);
            else 
                ft_strncpy(res[y], &str[x], i - x);
            y++;
        }
    }
    res[y] = NULL;
    return (res);
}

int main(void)
{
    char    **res;
    int     y;

    y = 0;
    char    *str = " hello how are? you         ";
    res = ft_split(str);
    while(res[y] != NULL)
    {
        printf("%s\n", res[y]);
        y++;
    }
    return (1);
}