/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 19:51:21 by grichie           #+#    #+#             */
/*   Updated: 2020/07/31 19:51:28 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_node;

	new_node = (t_btree*)malloc(sizeof(t_btree));
	new_node->item = item;
	new_node->left = (void*)0;
	new_node->right = (void*)0;
	return (new_node);
}
