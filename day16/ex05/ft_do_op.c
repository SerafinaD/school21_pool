/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:22:58 by grichie           #+#    #+#             */
/*   Updated: 2020/07/29 15:23:00 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_oper.h"
#include "ft_atoi.h"

void	ft_putnbr(int nb)
{
	char printed_char;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		printed_char = nb % 10 + 48;
		write(1, &printed_char, 1);
	}
}

int		ft_isvalid(char *oper)
{
	int	len;

	len = 0;
	while (oper[len])
		len++;
	if (len > 1)
		return (-1);
	if ((*oper != '-') && (*oper != '+') &&
	(*oper != '%') && (*oper != '/') && (*oper != '*'))
		return (-1);
	return (1);
}

int		ft_opnum(char op)
{
	if (op == '+')
		return (0);
	else if (op == '-')
		return (1);
	else if (op == '%')
		return (2);
	else if (op == '/')
		return (3);
	else
		return (4);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_isvalid(argv[2]) == -1)
	{
		ft_putnbr(0);
		return (-1);
	}
	if ((*(argv[2]) == '%') && (b == 0))
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	else if ((*(argv[2]) == '/') && (b == 0))
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	ft_putnbr(g_ft_op[ft_opnum(*(argv[2]))](a, b));
	write(1, "\n", 1);
}
