/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:15:12 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/03 20:22:25 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		counter;

	counter = 0;
	list = begin_list;
	if (list)
	{
		while (list->next)
		{
			list = list->next;
			counter++;
		}
	}
	return (counter);
}
