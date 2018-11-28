/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 20:42:19 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/20 21:02:39 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *str;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		str = (int*)malloc(sizeof(*str) * (max - min));
		while (min < max)
		{
			str[i] = min;
			i++;
			min++;
		}
	}
	return (str);
}
