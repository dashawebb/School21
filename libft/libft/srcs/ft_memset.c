/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:31:10 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/30 17:57:58 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)b;
	while (len > 0)
	{
		s[i] = c;
		i++;
		len--;
	}
	return (s);
}
