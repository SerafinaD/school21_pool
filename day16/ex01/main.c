#include <stdio.h>
#include <stdlib.h>
#include "../ex00/ft_foreach.c"
#include "ft_map.c"

void	ft_putnbr(int n)
{
	printf("%d, ", n);
}

int	ft_incnbr(int n)
{
	return (++n);
}

int	main()
{
	int	arr[] = {2, 3, 5, 1, 3, 2, 6, 9, 8, 7};
	int	*ara;

	ft_foreach(arr, 10, &ft_putnbr);
	ara = ft_map(arr, 10, &ft_incnbr);
	printf("\n");
	ft_foreach(ara, 10, &ft_putnbr);
	free(ara);
}
