int	ft_isprint(unsigned char c)
{
	if (c >= 40 && c <= 176)
		return (1);
	else
		return (0);
}
/* 
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_isprint(av[1][0]));
	}
	return (0);
} */