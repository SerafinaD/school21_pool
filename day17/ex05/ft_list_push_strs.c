/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 13:02:10 by grichie           #+#    #+#             */
/*   Updated: 2020/07/30 13:02:16 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*temp;
	int		i;
	t_list	*iter;

	i = size - 2;
	temp = ft_create_elem(&strs[size - 1]);
	iter = temp;
	while (i >= 0)
	{
		iter->next = ft_create_elem(&strs[i]);
		iter = iter->next;
		i--;
	}
	return (temp);
}
