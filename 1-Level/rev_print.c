#include <unistd.h>

int	ft_strlen(char *str)
{
		int	len;

		len = 0;
		while(str[len] != '\0')
				len++;
		return(len - 1);
}
void	ft_rev_print(char *str)
{
		int	len;

		len = ft_strlen(str);

		while (len >= 0)
		{
				write(1, &str[len], 1);
				len--;
		}
		write(1, "\n", 1);
}

int	main(int argc, char* argv[])
{
		if (argc != 2)
				write(1, "\n", 1);
		else
				ft_rev_print(argv[1]);
		return(1);
}
