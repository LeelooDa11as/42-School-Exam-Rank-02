#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
		int	len;

		len = 0;
		while(str[len] != '\0')
				len++;
		return (len);
}

int	ft_end(char	*str)
{
		int	end;

		end = ft_strlen(str) - 1;
		while (str[end] == ' ')
				end--;
		return (end);
}

int	ft_start(char *str)
{
		int start;

		start = 0;
		if (str[0] == ' ')
				while (str[start] == ' ')
						start++;
		return (start);
}

void	ft_expand_str(char *str)
{
		int	i;
		int	end;

		i = ft_start(str);
		end = ft_end(str);
		while (i <=  end)
		{
			while (str[i] != ' ' && i <= end)
			{
				write (1, &str[i], 1);
				i++;
			}
			if (i <= end)
			{
				write (1, "   ", 3);
				while (str[i] == ' ')
					i++;
			}
		}
		write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
		if (argc != 2)
				write (1, "\n", 1);
		else
				ft_expand_str(argv[1]);
		return (1);
}
