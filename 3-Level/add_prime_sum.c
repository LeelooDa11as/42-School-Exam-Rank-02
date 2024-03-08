#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
		int	res;
		int	sign;
		int i;

		res = 0;
		sign = 1;
		i = 0;
		if (str[i] == '-')
		{
				i++;
				sign = -1; 

		}
		while ( str[i] != '\0')
		{
				res = res * 10 + str[i] - '0';
				i++;
		}
		res = res * sign;
		return (res);
}

void	ft_itoa(int	num)
{
		char	c;

		if (num <= 9)
		{
				c = num + '0';
				write(1, &c, 1);
				return;
		}
		ft_itoa(num / 10);
		ft_itoa(num % 10);
		return;
}

void	ft_add_prime_sum(int num)
{
		int	sum;
		int	x;

		sum = 0;
		while (num > 1)
		{
				x = 2;
				while (num % x != 0)
						x++;
				if (num == x)
						sum = sum + num;
				num--;
		}
		ft_itoa(sum);
		write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
		int	num;

		num = 0;

		if (argc != 2)
			write(1, "0\n", 2);
		else
		{
			num = ft_atoi(argv[1]);
			if (num < 0)
				write(1, "0\n", 2);
			else
				ft_add_prime_sum(num);
		}
		return (1);
}
