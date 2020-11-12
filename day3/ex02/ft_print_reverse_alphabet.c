/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:24:52 by grichie           #+#    #+#             */
/*   Updated: 2020/07/15 17:25:15 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	printed_char;

	i = 0;
	printed_char = 'z';
	while (i < 26)
	{
		write(1, &printed_char, 1);
		printed_char = printed_char + '0' - '1';
		i++;
	}
}
