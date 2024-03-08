/*Allowed functions: write
Write a program that takes a string and displays its last word followed by a \n.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or there are no words, display a newline.
$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/

#include <unistd.h>

void    last_word(char *str)
{
    int i;
    int x;

    i = 0;
    x = 0;
    while(str[i])
    {
        if (str[i] == ' ' && str[i + 1] >= 'A' && str[i + 1] <= 'z')
            x = i + 1;
        i++;
    }
    while(str[x] > 32 && str[x] < 127)
    {
        write(1, &str[x], 1);
        x++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        last_word(argv[1]);
    write(1, "\n", 1);
    return (1);
}