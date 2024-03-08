#include <unistd.h>
#include <stdio.h>

int		jump_spaces(char *str, int i)
{
		while (str[i] == ' ')
				i++;
		return (i);
}

void	ft_expand(char *str)
{
		int i;

		i = jump_spaces(str, 0);
		while (str[i] != '\0')
		{
				while (str[i] != ' ' && str[i] != '\0')
				{
						write(1, &str[i], 1);
						i++;
				}
				i = jump_spaces(str, i);
				if (str[i] != '\0')
						write(1, "   ", 3);

		}
		write(1, "o\n", 2);

}

int	main(int argc, char *argv[])
{
	if (argc != 2)
			write(1, "\0", 1);
	else
		ft_expand(argv[1]);
	return (1);
}
