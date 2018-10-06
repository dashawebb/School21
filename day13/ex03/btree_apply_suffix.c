/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 22:20:27 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/05 22:30:48 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void*))
{
	if (root)
	{
		if (root->left)
			btree_apply_suffix(root->left, (*applyf));
		if (root->right)
			btree_apply_suffix(root->right, (*applyf));
		(*applyf)(root->item);
	}
}
