/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 15:38:50 by elchrist          #+#    #+#             */
/*   Updated: 2018/09/22 16:59:40 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
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
			if (nb <= 1)
			{
				return (1);
			}
			return (nb * ft_recursive_factorial(nb - 1));
		}
	}
}
