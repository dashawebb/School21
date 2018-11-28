/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:03:50 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/27 19:09:47 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_cheat_isalnum(int c)
{
	return (isalpha(c) || isdigit(c));
}

int ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c<= 57))
		return (1);
	return (0);
}

int	main()
{
	int a = '5';
	int b = 'q';
	int c = ')';
	int mine1 = ft_isalnum(a);
	int mine2 =ft_isalnum(b);
	int mine3 =ft_isalnum(c);
	int cheat1 = ft_cheat_isalnum(a);
	int cheat2 = ft_cheat_isalnum(b);
	int cheat3 = ft_cheat_isalnum(c);
	int stand1 = isalnum(a);
	int stand2 = isalnum(b);
	int stand3 = isalnum(c);
	printf("%d  %d  %d\n", mine1, cheat1, stand1);
	printf("%d  %d  %d\n", mine2, cheat2, stand2);
	printf("%d  %d  %d\n", mine3, cheat3, stand3);
}
