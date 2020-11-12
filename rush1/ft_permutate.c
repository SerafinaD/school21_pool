#include "ft_utility.h"
#include <stdio.h>
void ft_swap(int *a, int i, int j)
{
	int	temp;

	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

t_bool  ft_permute(int *arr)
{
	int	j;
	int	k;
	int	l;
	int	r;

	j = 2;
	while (j != -1 && arr[j] >= arr[j + 1])
		j--;
	if (j == -1)
		return FALSE;
	k = 3;
	while (arr[j] >= arr[k])
		k--;
	ft_swap(arr, j, k);
	l = j + 1;
	r = 3;
	while (l<r)
		ft_swap(arr, l++, r--);
	return TRUE;
}

t_bool  ft_isrule(int *arr, int uplim, int downlim)
{
	int	inc[3];

	inc[1] = 0;
	inc[2] = 0;
	inc[0] = 0;
	while (inc[0] < 3)
	{
		if (arr[inc[0]] < arr[inc[0] + 1])
			inc[1]++;
		if ((arr[inc[0] + 1] == 4) || (arr[inc[0]] == 4))
			break;
		inc[0]++;
	}
	inc[0] = 3;
	while (inc[0] > 0)
	{
		if (arr[inc[0]] < arr[inc[0] - 1])
			inc[2]++;
		if ((arr[inc[0] - 1] == 4) || (arr[inc[0]] == 4))
			break;
		inc[0]--;
	}
	if ((inc[1] + 1 == uplim) && (inc[2] + 1 == downlim))
		return (TRUE);
	return (FALSE);
}

int		ft_rowrule2(int **ans, int leftlim, int line)
{
	int	i;
	int	leftinc;
	int	maxval;

	i = 2;
	leftinc = 1;
	maxval = ans[3][line];
	while (i > 0)
	{
		if (maxval < ans[i - 1][line])
		{
			maxval = ans[i -1][line];
			leftinc++;
		}
		if ((ans[i - 1][line] == 4) || (ans[3][line] == 4))
			break;
		i--;
	}
	//printf("\nleftinc: %d\n", leftinc);
	return (leftinc);
}

t_bool	ft_rowisrule(int **ans, int rightlim, int leftlim, int line)
{
	int	inc[4];

	inc[2] = 1;
	inc[0] = 1;
	inc[3] = ans[0][line];
	while (inc[0] < 4)
	{
		if(ans[inc[0]][line] > inc[3])
		{
			inc[3] = ans[inc[0]][line];
			inc[2]++;
		}
		inc[1] = inc[0];
		while (inc[1] < 4)
			if(ans[inc[0] - 1][line] == ans[inc[1]++][line])
				return (FALSE);
		inc[0]++;
	}
	inc[0] = 0;
	//printf("\nline: %d\n", line);
	//printf("\nrightinc: %d\n", inc[2]);
	inc[1] = ft_rowrule2(ans, leftlim, line);
	if ((inc[2] == rightlim) && (inc[1] == leftlim))
		return (TRUE);
	return (FALSE);
}