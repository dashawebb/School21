/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:50:42 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/29 22:24:41 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char        *a;
    const char  *b;
    int         i;

    i = 0;
    a = (char *) dst;
    b = (const char *) src;
    while (b[i] != c && n > 0)
    {
        n--;
        a[i] = b[i];
        i++;
    }
    if (n > 0) //потому что не записывается последний символ
    {
        a[i] = b[i];
        i++;
        return (a);
    }
    else
        return (NULL);
}

int     main()
{
    unsigned char src[10] = "012346789";
    unsigned char stand[10] = "";
    unsigned char mine[10] = "";
    memccpy(stand, src, '1', 10);
    ft_memccpy(mine, src, '1', 10);
    printf("%s\n", stand);
    printf("%s\n", mine);
}
