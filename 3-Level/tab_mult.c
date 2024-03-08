#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <='9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res *sign);
}

void	put_nbr(int num)
{
	char c;

	if (num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
		return;
	}
	put_nbr(num / 10);
	put_nbr(num % 10);
}
void	print_tab(int num)
{
	int	i;
	int res;

	i = 1;
	while (i <= 9)
	{
		put_nbr(i);
		write(1, " x ", 3);
		put_nbr(num);
		write(1, " = ", 3);
		res = i * num;
		put_nbr(res);
		write(1, "\n", 1);
		i++;
	}
}
int	main(int argc, char *argv[])
{
	int	num;

	num = 0;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		//chekear mult por 9
		print_tab(num);
	}
	(write(1,"\n", 1));
	return (num);
}
