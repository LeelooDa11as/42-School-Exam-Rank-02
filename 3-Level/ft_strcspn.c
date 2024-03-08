#include <stdio.h>
#include <string.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	x;

	i = 0;
	while(s[i] != '\0')
	{
		x = 0;
		while(reject[x] != '\0')
		{
			if(s[i] == reject[x])
				return(i);
			x++;
		}
		i++;
	}
	return(i);
}
/*
int	main(void)
{
	printf("%zu\n", strcspn("", "j"));
	printf("%zu\n", ft_strcspn("jjjja", "j"));
}*/
