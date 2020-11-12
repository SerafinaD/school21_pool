/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:31:24 by grichie           #+#    #+#             */
/*   Updated: 2020/07/15 17:43:12 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	printed_char;

	i = 0;
	printed_char = '0';
	while (i < 10)
	{
		write(1, &printed_char, 1);
		printed_char = printed_char - '0' + '1';
		i++;
	}
}
