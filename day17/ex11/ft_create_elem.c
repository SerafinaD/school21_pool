/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 19:43:25 by grichie           #+#    #+#             */
/*   Updated: 2020/07/29 19:43:40 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (temp)
	{
		temp->next = (void*)0;
		temp->data = data;
	}
	return (temp);
}
