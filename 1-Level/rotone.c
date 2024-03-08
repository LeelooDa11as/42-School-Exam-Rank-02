#include <unistd.h>

void	ft_rotone(char *str)
{
		int	i;
		char c;

		i = 0;

		while(str[i] != '\0')
		{
				c = str[i];
				if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
				{
						c++;
						write(1, &c, 1);
				}
				else if(c == 'z'|| c == 'Z')
				{
						c = str[i] - 25;
						write(1, &c, 1);
				}
				else
						write(1, &c, 1);
				i++;
		}
		write(1, "\n", 1);
}

int	main(int argc, char	*str[])
{
		if (argc != 2)
				write(1, "\n", 1);
		else
				ft_rotone(str[1]);
		return (1);
}
