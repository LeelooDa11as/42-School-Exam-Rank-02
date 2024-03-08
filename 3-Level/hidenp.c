#include <unistd.h>
$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>*/
void	ft_hiden(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while(s2[x] != '\0' && s1[i] != '\0')
	{
		if (s2[x] == s1[i] && s1[i] != '\0')
		{
			i++;
			//printf("num: %d and leter: %s/n", i, &s1[i]);
		}
		x++;
	}
	if (s1[i] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if(argv[1][0] == '\0')
			write(1, "1", 1);
		else
			ft_hiden(argv[1], argv[2]);
	}
	return (write(1, "\n", 1));
}