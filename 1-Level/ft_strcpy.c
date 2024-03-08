#include <stdio.h>
#include <string.h>


char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int	main(void)
{
	char	*ptr;
	char	*ptr2;
	char	inp[100];
	char	inp2[100];

	ptr = strcpy(inp, "NULL");
	printf("-----/n");
	printf("%s\n", ptr);
	printf("%p,  %p\n", ptr, inp);
	printf("=====/n");
	ptr2 = ft_strcpy(inp2, NULL);
	printf("-----/n");
	printf("%s\n", ptr2);
	printf("%p,  %p\n", ptr2, inp2);
	return (1);
}*/
