/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 20:48:09 by grichie           #+#    #+#             */
/*   Updated: 2020/07/30 20:48:10 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref,
int (*cmp)())
{
	t_list	*iter;

	iter = begin_list;
	while (iter)
	{
		if ((*cmp)(iter->data, data_ref) == 0)
			return (iter);
		iter = iter->next;
	}
	return (iter);
}
