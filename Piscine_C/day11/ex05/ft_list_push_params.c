/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 20:40:52 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/03 23:29:00 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*end;
	t_list		*temp;

	i = 0;
	end = 0;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		if (!temp)
			break ;
		temp->next = end;
		end = temp;
		i++;
	}
	return (end);
}
