#include <stdio.h>
#include "ft_foreach.c"

void	ft_putnbr(int n)
{
	printf("%d, ", n);
}

int	main()
{
	int	arr[] = {2, 3, 5, 1, 3, 2, 6, 9, 8, 7};

	ft_foreach(arr, 10, &ft_putnbr);
}

