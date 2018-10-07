/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:03:56 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/07 23:19:34 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
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

int		ft_atoi(char **str)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	if (str == '\0')
		return (0);
	while (**str == '\t' || **str == '\v' || **str == '\n'
			|| **str == '\r' || **str == '\f' || **str == ' ')
		(*str)++;
	if (**str == '-')
	{
		sign = -1;
		(*str)++;
	}
	if (**str == '+')
		(*str)++;
	while ((**str >= '0' && **str <= '9') && **str != '\0')
	{
		nbr = (nbr * 10) + (**str - '0');
		(*str)++;
	}
	return (nbr * sign);
}
