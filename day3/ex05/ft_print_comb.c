/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 18:44:36 by grichie           #+#    #+#             */
/*   Updated: 2020/07/15 19:55:22 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	dcs_buf[5];

	dcs_buf[0] = '0';
	dcs_buf[1] = '1';
	dcs_buf[2] = '2';
	dcs_buf[3] = ',';
	dcs_buf[4] = ' ';
	while (dcs_buf[0] * 100 + dcs_buf[1] * 10 + dcs_buf[2] < 6100)
	{
		write(1, dcs_buf, 5);
		dcs_buf[2] += '1' - '0';
		if (dcs_buf[2] > '9')
		{
			if (dcs_buf[1] == '8')
			{
				dcs_buf[0] += '1' - '0';
				dcs_buf[1] = dcs_buf[0] + '1' - '0';
			}
			else
				dcs_buf[1] = dcs_buf[1] + '1' - '0';
			dcs_buf[2] = dcs_buf[1] + '1' - '0';
		}
	}
	write(1, dcs_buf, 3);
}
