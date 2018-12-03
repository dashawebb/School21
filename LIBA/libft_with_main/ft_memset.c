/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:09:24 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/30 17:57:11 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    int             i;
    unsigned char   *s;

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

int     main()
{
    unsigned char stand[15] = "";
    unsigned char mine[15] = "";
    memset (stand, 'q', 3);
    ft_memset (mine, 'q', 3);
    printf ("%s\n", stand);
    printf ("%s\n", mine);
}
