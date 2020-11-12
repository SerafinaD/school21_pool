#include <stdio.h>
#include "ft_is_sort.c"

void	ft_putnbr(int n)
{
	printf("%d, ", n);
}

int	ft_equal(int a, int b)
{
	return (a < b ? -1 : (a == b ? 0 : 1));
}

int	main()
{
	int	arr[] = {7, 6, 5, 4, 0, 1};

	ft_putnbr(ft_is_sort(arr, 6, &ft_equal));
	
}

