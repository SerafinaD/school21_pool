#include "ft_utility.h"
#include "ft_permutate.h"
#include <stdio.h>

void	ft_prsol(int **ans)
{
	char	printed_char[2];
	int		i;
	int		j;

	i = 0;
	j = 0;
	printed_char[1] = ' ';
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			printed_char[0] = ans[i][j] + 48;
			write(1, printed_char, 2);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

t_bool	ft_isans(int *terms, int **ans, int col)
{
	t_bool	rule;

	rule = (ft_isrule(ans[col], terms[col], terms[col+4]) ? 0 : 1);
	while (rule)
	{
		//printf("\n%d\t", col);
		if (!ft_permute(ans[col]))
			return (FALSE);
		//for (int i = 0; i < 4; i++) printf("%d\t", ans[col][i]);
		if (ft_isrule(ans[col], terms[col], terms[col+4]))
			rule = 0;
	}
	if(!rule)
		return(TRUE);
	return (FALSE);
}

t_bool	ft_rowans(int *terms, int **ans)
{
	int	line;

	//printf("\n\nError\n\n");
	line = 0;
	while ((line < 4) && (ft_rowisrule(ans, terms[8 + line], terms[12 + line], line)))
		line++;
	if (line == 4)
		return (TRUE);
	return (FALSE);
}

t_bool	ft_solve(int *terms, int **ans, int col)
{
	int	i;

	if ((col == 4) && (ft_rowans(terms, ans)))
		return (TRUE);	
	else if (col == 4)
		return (FALSE);
	while(ft_isans(terms, ans, col))
	{
		//printf("%dcol", col);
		if (ft_solve(terms, ans, col+1))
			return (TRUE);
		if (!ft_permute(ans[col]))
			return (FALSE);
		//for (int i = 0; i < 4; i++) printf("cp%d: %d\t", col, ans[col][i]);
	}
	i = 0;
	while (i < 4)
	{
		ans[col][i] = i + 1;
		i++;
	}
	return (FALSE);
}

int		main(int argc, char **argv)
{
	int	**ans;
	int	i;
	int	terms[16];
	int	j;

	i = 0;
	if (argc != 2 || !ft_split(argv[1], terms))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ans = (int **)malloc(32);
	while (i < 4)
		ans[i++] = (int *)malloc(16);
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
			ans[i++][j] = j + 1;
		j++;
	}
	if(!ft_solve(terms, ans, 0))
	{
		write(1, "Error\n", 6);
		ft_free(ans);
		return (0);
	}
	ft_prsol(ans);
	ft_free(ans);
}
