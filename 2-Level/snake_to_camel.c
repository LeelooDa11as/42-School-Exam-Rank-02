#include <unistd.h>

void    ft_camel(char *s)
{
    int     i;
    char    c;
    
    i = 0;
    while(s[i] != '\0')
    {
        while(s[i] != '_' && s[i] != '\0')
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                write(1, &s[i], 1);
                i++;
            }   
        }
        if(s[i] == '_')
        {
            i++;
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                c = s[i] - 32;
                write(1, &c, 1);
                i++;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        ft_camel(argv[1]);
    write(1, "\n", 1);
    return (1);
}