/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:45:34 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/27 16:57:16 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int number;
	int sign;
	int i;

	i = 0;
	sign = 1;
	number = 0;
	if (str == '\0')
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		   || str[i] == '\r' || str[i] == '\f' || str[i] == '\v' || str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (sign * number);
}

int	main()
{
	char *s = "+2+1";
	char *p = "-0";
	int mine1 = ft_atoi(s);
	int mine2 = ft_atoi(p);
	int st1 = atoi(s);
	int st2 = atoi(p);
	printf("%d\n", mine1);
	printf("%d\n", mine2);
	printf("%d\n", st1);
	printf("%d\n", st2);
}
