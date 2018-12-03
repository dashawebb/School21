/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:50:42 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/03 17:21:58 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char        *a;
    unsigned char  *b;
    int         i;

    i = 0;
    a = (unsigned char *) dst;
    b = (unsigned char *) src;
    while ((b[i] != (unsigned char )c) && n > 0)
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

int     main()
{
    char	buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char	buff2[] = "abcdefghijklmnopqrstuvwxyz";
	char	*src = "string with\200inside !";

	memccpy(buff1, src, 0600, 21);
	ft_memccpy(buff2, src, 0600, 21);
    printf("%s\n", buff1);
    printf("%s\n", buff2);
    // unsigned char src[10] = "012346789";
    // unsigned char stand[10] = "";
    // unsigned char mine[10] = "";
    // memccpy(stand, src, '1', 10);
    // ft_memccpy(mine, src, '1', 10);
    // printf("%s\n", stand);
    // printf("%s\n", mine);
}
