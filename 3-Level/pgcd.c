/*Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_com_denom(int n1, int n2)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while(i <= n1)
	{
		if (n1 % i == 0)
		{
			if(i <= n2 && n2 % i == 0)
				res = i;
		}
		i++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		if (n1 > 0 && n2 > 0)
			printf("%d", ft_com_denom(n1, n2));
	}
	printf("\n");
	return (1);
}
