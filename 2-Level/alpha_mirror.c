
/*
Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline. 'a' becomes 'z', 'Z' becomes 'A''d' becomes 'w', 'M' becomes 'N'
Case is not changed. If the number of arguments is not 1, display only a newline.
$>./alpha_mirror "abc"
zyx */
#include <unistd.h>

void alpha_mirror(char *str)
{
    int     i;
    char    c;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            c = 'Z' - (str[i] - 'A');
        else if (str[i] >= 'a' && str[i] <= 'z')
            c = 'z' - (str[i] - 'a');
        else
            c = str[i];
        write(1, &c, 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc == 2)
        alpha_mirror(argv[i]);
    write(1, "\n", 1);
    return (1);
}