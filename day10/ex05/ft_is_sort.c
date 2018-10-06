/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 22:54:35 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/02 20:59:58 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int pos;
	int neg;

	i = 0;
	pos = 0;
	neg = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i], tab[i + 1]) > 0)
			pos = pos + 1;
		else
			neg = neg + 1;
		i++;
	}
	if (pos == 0 && neg != 0)
		return (1);
	else if (neg == 0 && pos != 0)
		return (1);
	else
		return (0);
}
