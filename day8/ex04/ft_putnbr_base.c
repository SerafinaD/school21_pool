/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 14:26:53 by grichie           #+#    #+#             */
/*   Updated: 2020/07/21 14:27:23 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int				ft_ischar(char *s1, char c)
{
	while (*s1 != '\0')
	{
		if (*s1 == c)
			return (1);
		s1++;
	}
	return (0);
}

int				ft_istwice(char *str)
{
	while (*(str + 1))
	{
		if (ft_ischar(str + 1, *str))
			return (1);
		str++;
	}
	return (0);
}

void			ft_print_base(unsigned int nbr, char *base, unsigned int len)
{
	char printed_char;

	if (nbr >= len)
		ft_print_base(nbr / len, base, len);
	printed_char = base[nbr % len];
	write(1, &printed_char, 1);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int unbr;

	if ((ft_strlen(base) <= 1) || (ft_istwice(base)) ||
	(ft_ischar(base, '+')) || (ft_ischar(base, '-')))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		unbr = -nbr;
		ft_print_base(unbr, base, ft_strlen(base));
	}
	else
		ft_print_base(nbr, base, ft_strlen(base));
}
