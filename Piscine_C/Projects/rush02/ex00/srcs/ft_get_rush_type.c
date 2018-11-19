/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rush_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:32:03 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/07 15:28:21 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_compute_extreme(int width, int height, int pos[4])
{
	pos[0] = 0;
	pos[1] = width - 1;
	pos[2] = (width + 1) * (height - 1);
	pos[3] = ((width + 1) * height) - 2;
}

int		ft_check_extreme(char *str, int pos[4], char symb[4])
{
	if (str[pos[0]] == symb[0] && str[pos[1]] == symb[1]
		&& str[pos[2]] == symb[2] && str[pos[3]] == symb[3])
	{
		return (1);
	}
	return (0);
}

void	ft_get_rush_type_1(char *str, int width, int height, int types[5])
{
	int pos[4];

	ft_compute_extreme(width, height, pos);
	if (ft_check_extreme(str, pos, "oooo"))
		types[0] = 1;
	else if (ft_check_extreme(str, pos, "/\\\\/"))
		types[1] = 1;
	else if (ft_check_extreme(str, pos, "AACC"))
		types[2] = 1;
	else if (ft_check_extreme(str, pos, "ACAC"))
		types[3] = 1;
	else if (ft_check_extreme(str, pos, "ACCA"))
		types[4] = 1;
}

void	ft_get_rush_type_2(char *str, int width, int height, int types[5])
{
	int pos[4];

	ft_compute_extreme(width, height, pos);
	if (ft_check_extreme(str, pos, "AAAA"))
	{
		types[2] = 1;
		types[3] = 1;
		types[4] = 1;
	}
	else if (height == 1
		&& (ft_check_extreme(str, pos, "ACAC")
		|| ft_check_extreme(str, pos, "AACC")))
	{
		types[3] = 1;
		types[4] = 1;
	}
	else if (width == 1
		&& (ft_check_extreme(str, pos, "ACAC")
		|| ft_check_extreme(str, pos, "AACC")))
	{
		types[2] = 1;
		types[4] = 1;
	}
}

int		ft_get_rush_type(char *str, int width, int height, int types[5])
{
	ft_get_rush_type_1(str, width, height, types);
	ft_get_rush_type_2(str, width, height, types);
	return (types[0] || types[1] || types[2] || types[3] || types[4]);
}
