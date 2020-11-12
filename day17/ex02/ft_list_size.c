/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 21:08:00 by grichie           #+#    #+#             */
/*   Updated: 2020/07/29 21:08:03 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		len;
	t_list	*iter;

	len = 0;
	iter = begin_list;
	while (iter)
	{
		len++;
		iter = iter->next;
	}
	return (len);
}
