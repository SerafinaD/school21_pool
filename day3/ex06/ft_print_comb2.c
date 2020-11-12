/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:03:30 by grichie           #+#    #+#             */
/*   Updated: 2020/07/16 19:29:28 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		f_pair;
	int		s_pair;
	char	dig_space[7];

	s_pair = 1;
	f_pair = 0;
	dig_space[2] = ' ';
	dig_space[5] = ',';
	dig_space[6] = ' ';
	while ((s_pair != 99) || (f_pair != 98))
	{
		dig_space[0] = (int)(f_pair / 10) + 48;
		dig_space[1] = f_pair % 10 + 48;
		dig_space[3] = (int)(s_pair / 10) + 48;
		dig_space[4] = s_pair % 10 + 48;
		write(1, dig_space, 7);
		s_pair++;
		if (s_pair == 100)
		{
			f_pair++;
			s_pair = f_pair + 1;
		}
	}
	dig_space[1] = '8';
	write(1, dig_space, 5);
}
