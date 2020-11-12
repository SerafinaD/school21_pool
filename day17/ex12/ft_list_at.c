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

t_list	*ft_list_at(t_list *begin_list, int nbr)
{
	int		count;
	t_list	*iter;

	count = 0;
	iter = begin_list;
	while ((iter) && (count < nbr - 1))
	{
		count++;
		iter = iter->next;
	}
	if ((!begin_list) || (count < nbr - 1))
		return ((void*)0);
	return (iter);
}
