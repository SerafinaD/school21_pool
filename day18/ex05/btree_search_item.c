/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 21:52:24 by grichie           #+#    #+#             */
/*   Updated: 2020/07/31 21:52:26 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
void *data_ref, int (*cmpf)(void *, void *))
{
	void	*leftv;
	void	*rightv;

	if (root)
	{
		leftv = btree_search_item(root->left, data_ref, cmpf);
		if ((*cmpf)(root->item, data_ref) == 0)
			return (root->item);
		rightv = btree_search_item(root->right, data_ref, cmpf);
		if (leftv)
			return (leftv);
		else if (rightv)
			return (rightv);
	}
	return ((void*)0);
}
