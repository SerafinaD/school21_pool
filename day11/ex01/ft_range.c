/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 18:25:51 by grichie           #+#    #+#             */
/*   Updated: 2020/07/23 18:25:53 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

int	*ft_range(int min, int max)
{
	unsigned long int	len;
	int					*arr;
	int					i;

	i = 0;
	if (max <= min)
		return ((void*)0);
	len = max - min;
	if ((arr = malloc(len * 4)) == (void*)0)
	{
		errno = ENOMEM;
		return ((void*)0);
	}
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
