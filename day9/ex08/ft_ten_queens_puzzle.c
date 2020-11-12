/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 20:54:30 by grichie           #+#    #+#             */
/*   Updated: 2020/07/22 20:58:30 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printsol(int plc[10])
{
	int		i;
	char	printed_char;
	char	endl;

	endl = '\n';
	i = 0;
	while (i < 10)
	{
		printed_char = plc[i++] + 48;
		write(1, &printed_char, 1);
	}
	write(1, &endl, 1);
}

int		ft_abs(int nb, int wdo, int *plc)
{
	int	i;

	if (wdo == 1)
	{
		if (nb < 0)
			return (-nb);
		return (nb);
	}
	else
	{
		i = 0;
		while (i < 10)
			wdo += plc[i];
		return (wdo == 81 ? 1 : 0);
	}
}

int		ft_issafe(int *plc, int col, int id)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (plc[i] == id)
			return (0);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		if ((ft_abs(col - i, 1, plc) - ft_abs(id - plc[i], 1, plc)) == 0)
			return (0);
		i++;
		if (i == col)
			i++;
	}
	return (1);
}

int		ft_solve(int *plc, int col, int *ans)
{
	int	i;

	if (col >= 10)
	{
		ft_printsol(plc);
		plc[9] += 1;
		*ans += 1;
		i = ft_solve(plc, 0, ans);
		if (ft_abs(1,  0, plc))
			return 1;
	}
	i = 0;
	while (i < 10)
	{
		if (ft_issafe(plc, col, i))
		{
			plc[col] = i;
			if (ft_solve(plc, col + 1, ans))
				return (1);
			plc[col] = -100000;
		}
		i++;
	}
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	int	plc[10];
	int	i;
	int	ans;

	i = 0;
	ans = 0;
	while (i < 10)
	{
		plc[i] = -100000;
		i++;
	}
	
	i = ft_solve(plc, 0, &ans);
	return (ans);
}
