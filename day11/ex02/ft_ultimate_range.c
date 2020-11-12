/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 18:58:03 by grichie           #+#    #+#             */
/*   Updated: 2020/07/24 18:58:05 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned long int	len;
	int					i;

	i = 0;
	if (max <= min)
	{
		*range = (void*)0;
		return (0);
	}
	len = max - min;
	if ((*range = malloc(len * 4)) == (void*)0)
	{
		errno = ENOMEM;
		return (-1);
	}
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
