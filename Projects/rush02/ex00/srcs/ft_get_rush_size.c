/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rush_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 12:55:22 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/07 13:51:43 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_rush_size(char *str, int *width, int *height)
{
	int		i;
	int		width_temp;

	i = 0;
	width_temp = 0;
	*height = 1;
	while (str[i] != '\0')
	{
		if (str[i] != '\n')
			width_temp++;
		if (str[i] == '\n')
		{
			if (*height == 1)
				*width = width_temp;
			else
			{
				if (*width != width_temp)
					return (0);
			}
			width_temp = 0;
			if (str[i] == '\n' && str[i + 1] == '\0')
				return (1);
			else
				(*height)++;
		}
		i++;
	}
	return (1);
}
