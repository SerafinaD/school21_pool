/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 19:15:42 by grichie           #+#    #+#             */
/*   Updated: 2020/07/28 19:15:54 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	howsorted;

	i = 0;
	while ((i < length - 1) && (f(tab[i], tab[i + 1]) == 0))
		i++;
	if ((i < length - 1) && (f(tab[i], tab[i + 1]) > 0))
		howsorted = 1;
	else
		howsorted = -1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) * howsorted < 0)
			return (0);
		i++;
	}
	return (1);
}
