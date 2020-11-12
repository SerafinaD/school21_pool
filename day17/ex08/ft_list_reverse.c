/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 18:27:01 by grichie           #+#    #+#             */
/*   Updated: 2020/07/30 18:27:05 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*temp;
	t_list	*iter;
	t_list	*prev;

	prev = (void*)0;
	iter = *begin_list;
	if (iter)
		while (iter)
		{
			temp = iter;
			iter = iter->next;
			temp->next = prev;
			prev = temp;
		}
	*begin_list = prev;
}
