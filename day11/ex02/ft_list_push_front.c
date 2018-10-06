/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:37:37 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/03 18:57:20 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*start;

	start = *begin_list;
	if (start)
	{
		list = ft_create_elem(data);
		if (list)
		{
			list->next = start;
			start = list;
		}
	}
	else
		*begin_list = ft_create_elem(data);
}
