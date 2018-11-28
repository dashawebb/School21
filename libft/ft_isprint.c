/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:57:57 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/28 22:05:05 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main()
{
	int a = "us";
	int stand = isprint(a);
	int mine = ft_isprint(a);
	printf("%d\n", stand);
	printf("%d\n", mine);
}
