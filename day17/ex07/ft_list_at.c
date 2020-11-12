/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 16:27:40 by grichie           #+#    #+#             */
/*   Updated: 2020/07/30 16:27:45 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		count;
	t_list		*iter;

	count = 0;
	iter = begin_list;
	if (nbr == 0)
		return (iter);
	while ((iter) && (count < nbr - 1))
	{
		count++;
		iter = iter->next;
	}
	if (count < nbr - 1)
		return ((void*)0);
	return (iter);
}
