#include <stdio.h>
#include "ft_count_if.c"

int	ft_check(char *str)
{
	if (*str == 'a')
		return (1);
	return (0);
}


int	main()
{
	char	*ch[] = {"rray", "green", "1234", "iykjk"};

	printf("%d", ft_count_if(ch, 4, &ft_check));
}