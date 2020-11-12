/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 21:37:42 by grichie           #+#    #+#             */
/*   Updated: 2020/07/30 21:37:44 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*iter;
	t_list	*prev;
	t_list	*lnext;

	iter = *begin_list;
	prev = (void*)0;
	while (iter)
	{
		if ((*cmp)(iter->data, data_ref) == 0)
		{
			if (!prev)
				*begin_list = (*begin_list)->next;
			lnext = iter->next;
			if (prev)
				prev->next = lnext;
			(*free_fct)(iter->data);
			free(iter);
			iter = lnext;
		}
		else
		{
			prev = iter;
			iter = iter->next;
		}
	}
}
