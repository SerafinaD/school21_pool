/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 22:06:38 by grichie           #+#    #+#             */
/*   Updated: 2020/07/31 22:06:39 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	rightlev;
	int	leftlev;

	if (!root)
		return (0);
	leftlev = btree_level_count(root->left);
	rightlev = btree_level_count(root->right);
	if (leftlev > rightlev)
		return (leftlev + 1);
	else
		return (rightlev + 1);
}
