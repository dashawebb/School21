/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 13:53:49 by rschuppe          #+#    #+#             */
/*   Updated: 2018/10/07 13:53:51 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_display_result(int types[4], int width, int height)
{
	int i;
	int check;

	i = 0;
	check = 0;
	while (i < 5)
	{
		if (types[i])
		{
			if (check)
				ft_putstr(" || ");
			ft_putstr("[rush-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(width);
			ft_putstr("] [");
			ft_putnbr(height);
			ft_putstr("]");
			check = 1;
		}
		i++;
	}
}

void	ft_handler(char *str)
{
	int width;
	int height;
	int types[5];

	types[0] = 0;
	types[1] = 0;
	types[2] = 0;
	types[3] = 0;
	types[4] = 0;
	if (ft_get_rush_size(str, &width, &height) == 0)
		ft_putstr("Size error");
	else if (ft_get_rush_type(str, width, height, types) == 0)
		ft_putstr("Type error");
	else if (ft_validate_rush(str, types, width, height) == 0)
		ft_putstr("Valid error");
	else
		ft_display_result(types, width, height);
}

int		main(void)
{
	char	buf[32];
	char	*res;
	int		size;

	res = NULL;
	while ((size = read(0, &buf, 32)))
	{
		buf[size] = '\0';
		res = ft_strcat(res, buf);
	}
	ft_handler(res);
	ft_putchar('\n');
	return (0);
}
