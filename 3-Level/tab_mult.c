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

}
void	print_tab(int num);
{

}
int	main(int argc, char *argv[])
{
	int	num;
	num = 0;

	if (argc == 1)
		return (write(1,"\n", 1));
	if (argc == 2)
		num = ft_atoi(argv[1]);
	printf("%d\n", num);
	return (num);
}
