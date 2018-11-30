/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:48:06 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/30 18:27:50 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	int         i;
	char        *a;
	const char  *b;

    i = 0;
    a = (char *) dst;
    b = (const char *) src;
    while (n > 0)
    {
		a[i] = b[i];
    	i++;
    	n--;
	}
    return (a);
}
