/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:09:37 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/27 18:51:40 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c<= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	main()
{
	int a = 12;
	int c = isalpha(a);
	int d = ft_isalpha(a);
	printf("%d\n", c);
	printf("%d\n", d);
}
