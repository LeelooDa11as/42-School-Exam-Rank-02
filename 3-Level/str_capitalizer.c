/* str_capitalizer.c Allowed functions: write
Write a program that takes one or several strings and, each argument,
capitalizes the first character of each word If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.
$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>*/

#include <unistd.h>

char lower_case(char c)
{
    char    k;
    if(c >= 'A' && c<= 'Z')
        k = c + 32;
    else 
        k = c;
    return (k);
}

void capitalise(char *str)
{
    int     i;
    int     x;
    char    c;

    i = 0;
    while(str[i])
    {
        if(i == 0)
        {
            c = str[0];
            if (str[0] >= 'a' && str[0] <= 'z')
                c = str[0] - 32;
        }
        else
        {
            x = i - 1;
            if((str[x] == ' ' || str[x] == '\t') && (str[i] >= 'a' && str[i] <= 'z'))
                c = str[i] - 32;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                c = lower_case(str[i]);
            else
                c = str[i];
        }
        write(1, &c, 1); 
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc >=2)
        while(i < argc)
        {
            capitalise(argv[i]);
            write(1, " ", 1);
            i++;
        }
    write(1, "\n", 1);
    return (1);
}