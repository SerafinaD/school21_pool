/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 21:09:48 by grichie           #+#    #+#             */
/*   Updated: 2020/07/31 21:09:49 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root,
void *item, int (*cmpf)(void *, void *))
{
	t_btree	*iter;

	if (!(*root))
	{
		*root = btree_create_node(item);
		return ;
	}
	iter = *root;
	while (iter)
	{
		if ((*cmpf)(item, iter->item) >= 0)
			iter = iter->right;
		else
			iter = iter->left;
	}
	iter = btree_create_node(item);
}
