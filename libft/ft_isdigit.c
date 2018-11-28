/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 18:55:31 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/27 18:59:51 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <=57)
		return (1);
	return (0);
}

int	main()
{
	int a = '5';
	int b = 'q';
	int mine1 = ft_isdigit(a);
	int mine2 = ft_isdigit(b);
	int stand1 = isdigit(a);
	int stand2 = ft_isdigit(b);
	printf("%d   %d\n", mine1, stand1); 
	printf("%d   %d\n", mine2, stand2);
}
