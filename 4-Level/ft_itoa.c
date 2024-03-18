#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/* Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.
Your function must be declared as follows:
                 char	*ft_itoa(int nbr);
*/
int ft_len(int num)
{
    int len;

    len = 0;
    if (num < 0)
    {
        len += 1;
        num *= -1;
    }
    while(num > 9)
    {
        num = num / 10;
        len++;
    }
    if (num >= 0 && num <= 9)
        len++;
    return (len);
}

char   ft_putchar(int num)
{
    char    c;

    c = num + '0';
    return(c);
}

char	*ft_itoa(int nbr)
{
    char    *res;
    int     len;

    len = ft_len(nbr);
    res = malloc(sizeof(char) * (len + 1));
    if(!res)
        return (NULL);
    res[len] = '\0';
    if (nbr < 0)
    {
        res[0] = '-';
        nbr *= -1;
    }
    res[len] = '\0';
    while (nbr)
    {
        len--;
        res[len] = nbr % 10 + '0';
		nbr /= 10;
	}
    return (res);
}

int main(void)
{
    int     num;
    char    *res;

    num = -1906;
    //printf("%d\n", ft_len(num));
    res = ft_itoa(num);
    printf("%s\n", res);

    return (1);
}