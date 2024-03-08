#include <unistd.h>

void    capitalise_l(char *str)
{
    
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc >=2)
        while(i < argc)
        {
            capitalise_l(argv[i]);
            write(1, " ", 1);
            i++;
        }
    write(1, "\n", 1);
    return (1);
}