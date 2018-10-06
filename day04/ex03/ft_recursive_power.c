/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 19:12:36 by elchrist          #+#    #+#             */
/*   Updated: 2018/09/22 20:30:43 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int b;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power % 2 == 1)
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
	else
	{
		b = ft_recursive_power(nb, power / 2);
		return (b * b);
	}
}
