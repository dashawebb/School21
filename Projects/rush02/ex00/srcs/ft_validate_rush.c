/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_rush.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:47:27 by rschuppe          #+#    #+#             */
/*   Updated: 2018/10/07 19:47:28 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_check_up_down_frame(char s, int types[5])
{
	if ((types[0] && s != '-') || (types[1] && s != '*')
		|| ((types[2] || types[3] || types[4]) && s != 'B'))
		return (0);
	return (1);
}

int	ft_check_left_right_frame(char s, int types[5])
{
	if ((types[0] && s != '|') || (types[1] && s != '*')
		|| ((types[2] || types[3] || types[4]) && s != 'B'))
		return (0);
	return (1);
}

int	ft_validate_rush(char *str, int types[5], int width, int height)
{
	int i;
	int pos[4];

	i = -1;
	ft_compute_extreme(width, height, pos);
	while (++i >= 0 && str[i] != '\0')
	{
		if (i == pos[0] || i == pos[1] || i == pos[2] || i == pos[3])
			continue;
		if ((i > pos[0] && i < pos[1]) || (i > pos[2] && i < pos[3]))
		{
			if (ft_check_up_down_frame(str[i], types) == 0)
				return (0);
		}
		else if ((width > 1 && height > 1)
			&& (!(i % (width + 1)) || !((i - (width - 1)) % (width + 1))))
		{
			if (ft_check_left_right_frame(str[i], types) == 0)
				return (0);
		}
		else if (str[i] != ' ' && str[i] != '\n')
			return (0);
	}
	return (1);
}
