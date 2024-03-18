/*Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.
Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.
If the number of parameters is not 1, simply display a newline.
The input, when there is one, will be valid.
$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int	is_prime(int prime)
{
	int	i;

	i = 2;
	while(i <= prime)
	{
		if (prime % i == 0 && i != prime)
			return (0);
		if (prime % i == 0 && i == prime)
			return (1);
		i++;
	}
	return (0);
}

void	fprime(int num)
{
	int	prime;

	if (num == 1)
		printf("1");
	prime = 2;
	while (num > 1)
	{
		if (num % prime == 0)
		{
			printf("%d", prime);
			num /= prime;
			if (num > 1)
				printf("*"); 
		}
		else
		{
			prime++;
			while (is_prime(prime) != 1)
				prime++;
		}
	}
}


int		main(int argc, char *argv[])
{
	int	num;

	num = 0;
		if (argc == 2)
			{
				num = atoi(argv[1]);
				if(num > 0)
					fprime(num);
			}
		printf("\n");		
		return (1);
}
