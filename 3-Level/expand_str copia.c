#include <unistd.h>

int main(int argc, char *argv[])
{
    int     i;
    char    *s;

    i = 0; 
    s = argv[1];
    if (argc == 2 && s[0]!= '\0')
    {
        while (s[i] == ' ' || s[i] == '\t')
            i++;
        while (s[i] != '\0')
        {
            while (s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
            {
                write(1, &s[i], 1);
                i++;
            }
            while ((s[i] == ' ' || s[i] == '\t') && s[i] != '\0')
                i++;
            if (s[i] != '\0')
                write(1, "   ", 3);
        }   
    }
    write(1, "\n", 1);
    return (1);
}