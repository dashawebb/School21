/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:02:32 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/03 20:41:08 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	int				i;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while ((b[i] != (unsigned char)c) && n > 0)
	{
		n--;
		a[i] = b[i];
		i++;
	}
	if (n > 0)
	{
		a[i] = b[i];
		i++;
		return (a + i);
	}
	else
		return (NULL);
}
