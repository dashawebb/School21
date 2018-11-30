/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:22:06 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/29 21:30:08 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    int             i;
    unsigned char   *s;

    i = 0;
    s = (unsigned char *)b;
    while (s[i] && len --> 0)
    {
        s[i] = c;
        i++;
    }
    return (s);
}

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}

int main()
{
    unsigned char stand[15] = "1234567890";
    unsigned char mine[15] = "1234567890";
    bzero (stand, 0);
    ft_bzero (mine, 0);
    printf ("%s\n", stand);
    printf ("%s\n", mine);
}
