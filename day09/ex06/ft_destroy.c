/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 23:11:10 by elchrist          #+#    #+#             */
/*   Updated: 2018/09/27 23:11:20 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	while (**factory != '\0')
	{
		while (*factory != '\0')
		{
			free(*factory);
			*factory++;
		}
		free(**factory);
		**factory++;
	}
}
