/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:03:43 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/07 22:54:03 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	int		length;
	char	*result;

	length = ft_strlen(dest) + ft_strlen(src);
	result = (char*)malloc(length + 1 * sizeof(char));
	if (result)
	{
		i = 0;
		while (dest && dest[i] != '\0')
		{
			result[i] = dest[i];
			i++;
		}
		j = 0;
		while (src[j] != '\0')
			result[i++] = src[j++];
		result[i] = '\0';
		if (dest)
			free(dest);
	}
	return (result);
}
