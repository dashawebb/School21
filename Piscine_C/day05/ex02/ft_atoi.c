/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 12:32:19 by elchrist          #+#    #+#             */
/*   Updated: 2018/09/25 17:33:23 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int final;
	int sign;

	i = 0;
	final = 0;
	sign = 1;
	while (str[i] == '\r' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] == ' ' || str[i] == 'f' || str[i] == 'r')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		final = final * 10 + str[i] - '0';
		i++;
	}
	return (final * sign);
}
