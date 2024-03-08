#include <unistd.h>

void	print_bits(unsigned char octet)
{
		char	bin;
		int		div;

		div = 128;
		while (div != 0)
		{
				if (octet >= div)
				{
						bin = '1';
						octet = octet - div;
				}
				else
						bin = '0';
				write(1, &bin, 1);
				div = div / 2;
		}
}
/*
int	main(void)
{
		unsigned char	octet;

		octet = 150;
		print_bits(octet); 
		return (1);
}*/
