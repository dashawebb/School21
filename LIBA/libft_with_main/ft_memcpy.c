/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:35:08 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/03 20:23:14 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

//#include "libft.h"
#include <stdlib.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
        int         i;
        unsigned char        *a;
        unsigned char  *b;

        i = 0;
        a = (unsigned char *) dst;
        b = (unsigned char *) src;
        while (n > 0)
        {
            a[i] = b[i];
            i++;
            n--;
        }
        return (a);
}

int     main()
{
    // unsigned char src[] = "test basic du memcpy !";
    // unsigned char stand[22] = "";
    // unsigned char mine[22] = "";
    char	src[] = "test basic du memcpy !";
    char	buff1[22];

    char	*r1 = memcpy(buff1, src, 22);
    char	*r2 = ft_memcpy(buff1, src, 22);
    // memcpy(stand, src, 22);
    // ft_memcpy(mine, src, 22);
    printf("%s\n", r1);
    printf("%s\n", r2);
}
