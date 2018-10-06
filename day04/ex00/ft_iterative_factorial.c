/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 15:31:50 by elchrist          #+#    #+#             */
/*   Updated: 2018/09/22 17:15:13 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int factorial;

	if (nb < 0)
	{
		return (0);
	}
	else
	{
		if (nb > 12)
		{
			return (0);
		}
		else
		{
			factorial = 1;
			while (nb > 0)
			{
				factorial = factorial * nb;
				nb--;
			}
			return (factorial);
		}
	}
}
