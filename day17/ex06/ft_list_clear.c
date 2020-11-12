/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:26:59 by grichie           #+#    #+#             */
/*   Updated: 2020/07/30 15:06:57 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*lvisit;
	t_list	*temp;

	lvisit = begin_list;
	while (lvisit)
	{
		temp = lvisit;
		lvisit = lvisit->next;
		free_fct(temp->data);
		free(temp);
	}
}
