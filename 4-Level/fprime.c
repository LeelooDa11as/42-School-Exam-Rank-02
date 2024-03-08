#include <unistd.h>
#include <stdio.h>

int		strlen(const char *str)
{
		int	len;

		len = 0;
		while (str[len] != '\0')
				len++;
		return (len);
}

int		atoi(const char *str)
{
		int	n;
		int	i;

		
		i = 0;



		return (n);
}

void	fprime(char *str)
{
		int	arg_n;

		arg_n = atoi((const char*)str);
}


int		main(int argc, char *argv[])
{
		if (argc != 2)
				write(1, "\n", 1);
		else
				fprime(argv[1]);
		return (1);
}
