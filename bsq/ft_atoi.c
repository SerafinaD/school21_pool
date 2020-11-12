/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 14:50:14 by grichie           #+#    #+#             */
/*   Updated: 2020/07/20 14:50:16 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n' ||
	ch == '\v' || ch == '\f' || ch == '\r')
		return (1);
	return (0);
}

int	ft_issign(char ch)
{
	if (ch == '+')
		return (1);
	else if (ch == '-')
		return (-1);
	else
		return (0);
}

int	ft_isnumeric(char ch)
{
	if ((ch >= '0') && (ch <= '9'))
		return (1);
	return (0);
}

int	ft_atoi(char *str, int len)
{
	int	sign;
	int	res;
	int	i

	sign = 0;
	res = 0;
	i = 0;
	while (ft_isspace(str[i]) && (i < len - 3))
		i++;
	while (ft_issign(str[i]) && (i < len - 3))
	{
		if (ft_issign(str[i]) < 0)
			sign++;
		i++;
	}
	while (ft_isnumeric(str[i]) && (i < len - 3))
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (sign % 2 == 1 ? 0 : res);
}
