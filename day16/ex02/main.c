#include <stdio.h>
#include "ft_any.c"

int	ft_check(char *str)
{
	if (*str == 'a')
		return (1);
	return (0);
}


int	main()
{
	char	*ch[] = {"rray", "green", "a1234", (void*)0};

	printf("%d", ft_any(ch, &ft_check));
}