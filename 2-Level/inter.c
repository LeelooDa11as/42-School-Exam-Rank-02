#include <unistd.h>
#include <stdio.h>

void	intra(char *str1, char *str2 )
{
		int	i_s1;
		int	doubl_s1;
		int	i_s2;

		i_s1 = 0;
		while (str1[i_s1] != '\0')
		{
				doubl_s1 = 0;
				while (str1[i_s1] != str1[doubl_s1] && doubl_s1 < i_s1)
						doubl_s1++;
				if (doubl_s1 == i_s1)
				{
						i_s2 = 0;
						while (str2[i_s2] != '\0' && str2[i_s2] != str1[i_s1])
								i_s2++;
						if (str1[i_s1] == str2[i_s2])
								write (1, &str1[i_s1], 1);
				}
				i_s1++;
		}
		write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{		
		if (argc != 3)
				write(1, "\n", 1);
		else
				intra(argv[1], argv[2]);
		return (1);
}
