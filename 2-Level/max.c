//#include <stdio.h>

int	max(int* tab, unsigned int len)
{
		int	max;
		unsigned int	i;

		i = 0;
		if (len == 0)
				return (0);
		else
				max = tab[0];
		while(i < len)
		{
				if (tab[i] > max)
						max = tab[i];
				i++;
		}
		//printf("El max es %d\n", max);
		return (max);
}
/*
int	main(void)
{
		int	tab[5] = {-1, -2, -1, -5, -4};
		unsigned int len;
		len = 5;
		ft_max(tab, len);
		return (1);
}*/
