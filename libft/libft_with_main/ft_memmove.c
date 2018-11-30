/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 22:31:14 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/29 22:54:26 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    int     i;

    if (len == 0)
        return (dst);
    if (src < dst)
    {
        i = len;
        while (i > 0)
        {
            i--;
            ((char *)dst)[i] = ((const char *)src)[i];
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            ((char *)dst)[i] = ((const char *)src)[i];
            i++;
        }
    }
    return (dst);
}

int     main()
{
    unsigned char stand[8] = "0123467";
    printf ("stand old: %s\n", stand);
    memmove (&stand[4], &stand[3], 3);
    unsigned char mine[8] = "0123467";
    printf ("mine old:  %s\n", mine);
    ft_memmove (&mine[4], &mine[3], 3);
    printf ("stand new: %s\n", stand);
    printf ("mine new:  %s\n", mine);

}
