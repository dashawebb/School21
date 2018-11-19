/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:44:16 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/05 22:20:05 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void*))
{
	if (root)
	{
		if (root->left)
			btree_apply_prefix(root->left, applyf);
		(*applyf)(root->item);
		if (root->right)
			btree_apply_prefix(root->right, applyf);
	}
}
