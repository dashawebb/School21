/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 21:55:11 by elchrist          #+#    #+#             */
/*   Updated: 2018/09/27 22:01:51 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i <= j && i >= k))
	{
		return (i);
	}
	else if ((j >= i && j <= k) || (j <= i && j >= k))
	{
		return (j);
	}
	else
	{
		return (k);
	}
}