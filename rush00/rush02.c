/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtico <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 12:29:19 by mtico             #+#    #+#             */
/*   Updated: 2020/07/19 19:07:21 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	detect_and_output_cor(int x, int y, int curr_x, int curr_y)
{
	if (curr_x == 1)
	{
		if (curr_y == 1)
			ft_putchar('A');
		else if (curr_y == y)
			ft_putchar('C');
	}
	else if (curr_x == x)
	{
		if (curr_y == 1)
			ft_putchar('A');
		else if (curr_y == y)
			ft_putchar('C');
	}
}

void	detect_and_output(int x, int y, int curr_x, int curr_y)
{
	if ((curr_x == 1) || (curr_x == x))
	{
		if ((curr_y == 1) || (curr_y == y))
			detect_and_output_cor(x, y, curr_x, curr_y);
		else
			ft_putchar('B');
	}
	else
	{
		if ((curr_y == 1) || (curr_y == y))
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		col;
	int		str;

	col = 1;
	str = 1;
	while (str <= y)
	{
		col = 1;
		while (col <= x)
		{
			detect_and_output(x, y, col, str);
			col += 1;
		}
		if ((x != 0) && (y != 0))
			ft_putchar('\n');
		str += 1;
	}
}
