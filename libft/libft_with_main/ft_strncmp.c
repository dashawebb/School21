/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:37:02 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/30 21:01:06 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char )s1[i] - (unsigned char )s2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	char	*s1 = "\200";
	char	*s2 = "\0";
	int	mine = ft_strncmp(s1, s2, 1);
	int stand = strncmp(s1, s2, 1);
	printf("%d\n", mine);
	printf("%d\n", stand);
}
