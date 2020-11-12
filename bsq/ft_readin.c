#include "ft_realloc.h"
#include "ft_header.h"

char *ft_getfl(char *dst, int *len)
{
	char	c[1];
	char	*p;
	int		i;

	i = 0;
	p = dst;
	while (read(0, c, 1) && i < 15)
	{
		
		if (c[0] == '\n' || c[0] == '\0')
			break;
		*(p++) = c[0];
		i++;
	}
	*len = i;
	if (p == dst || c[0] != '\n' || i < 3)
	{
		ft_puterror(-1);
		return ((void*)0);
	}
	return (p);
}

void	ft_readin(void)
{
	char	infstr;
	int		size;
	char	**map;
	int		len;
	char		legend[3];

	size = 4096;
	infstr = (char*)malloc(16);
	if (!ft_getfl(infstr, &len) || !ft_flinean(infstr, legend, &len))
	{
		free(infstr);
		return ;
	}
	
	
}