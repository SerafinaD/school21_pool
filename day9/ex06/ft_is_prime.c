/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:14:33 by grichie           #+#    #+#             */
/*   Updated: 2020/07/21 18:14:47 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / 2)
	{
		if ((i * i > nb) || (i * i < 0))
			return (res);
		res = i;
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	if ((nb == 1) || (nb == 0))
		return (0);
	if ((nb == 2) || (nb == 3))
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	while (i < ft_sqrt(nb))
	{
		if ((i != 1) && ((nb % i) == 0))
			return (0);
		i++;
	}
	return (1);
}
