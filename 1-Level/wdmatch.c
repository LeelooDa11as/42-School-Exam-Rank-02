/*Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.
If the number of arguments is not 2, the program displays a \n.
Examples:
$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
*/
#include <unistd.h>
void ft_putstr(char const *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i;
    int x;

    i = 0;
    x = 0;
    if (argc == 3)
    {
        while(argv[2][x])
        {   
            if(argv[2][x] == argv[1][i])
                i++;
            x++;
        }
        if(argv[1][i] == '\0')
        ft_putstr(argv[1]);
    }
    write(1, "\n", 1);
    return (1);
}