/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:35:08 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/30 20:12:09 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char )s1[i] - (unsigned char )s2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	char	*s1 = "\0";
	char	*s2 = "\200";
	int mine = ft_strcmp(s1, s2);
	int stand = strcmp(s1, s2);
	printf("%d\n", mine);
	printf("%d\n", stand);
}
