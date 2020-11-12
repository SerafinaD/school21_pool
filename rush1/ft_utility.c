#include "ft_utility.h"
#include <stdio.h>

int		ft_wordcount(char *str)
{
	int	wrdc;

	wrdc = 0;
	str++;
	while(*str)
	{
		if ((*(str - 1) == ' ') && *(str) != ' ')
			wrdc++;
		str++;
	}
	return (wrdc + 1);
}

void    ft_free(int **arr)
{
	int	i;

	i = 0;
	while(i < 4)
		free(arr[i++]);
	free(arr);
}

void ft_atoi(int *arr, char **strs)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		arr[i] = *(strs[i]) - 48;
		i++;
	}
}

t_bool	ft_arguanalyze(char **strs)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if ( (*(strs[i]+1) != ' ') || (*(strs[i]+1) != '\0'))
			return (TRUE);
		if ((*strs[i] < '1') || (*strs[i] > '4'))
			return (TRUE);	
		i++;
	}
	return (FALSE);
}

t_bool	ft_split(char *str, int *arr)
{
	char	**strs;
	int	wrds;
	int	i;

	wrds = ft_wordcount(str);
	if (wrds < 16)
		return (FALSE);
	strs = (char **)malloc(16 * 8);
	i = 0;
	while (*str)
	{
		if ((*(str - 1) == ' ') && *(str) != ' ')
			strs[i++] = str;
		str++;
	}
	if (!ft_arguanalyze(strs))
		return (FALSE);
	ft_atoi(arr, strs);
	return (TRUE);
}