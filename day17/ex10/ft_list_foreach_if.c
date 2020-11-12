/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 20:38:02 by grichie           #+#    #+#             */
/*   Updated: 2020/07/30 20:38:07 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
void *data_ref, int (*cmp)())
{
	t_list	*iter;

	iter = begin_list;
	while (iter)
	{
		if ((*cmp)(iter->data, data_ref) == 0)
			(*f)(iter->data);
		iter = iter->next;
	}
}
