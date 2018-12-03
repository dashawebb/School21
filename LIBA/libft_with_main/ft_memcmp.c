/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:47:33 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/03 16:56:50 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *a;
    unsigned char *b;
    int i;

    a = (unsigned char *)s1;
    b = (unsigned char *)s2;
    i = 0;
    while (n > 0 && a[i] == b[i])
    {
        i++;
        n--;
    }
    if (n == 0)
        return (0);
    else
        return (a[i] - b[i]);
}
int main (void)
{
   unsigned char src[15]="1234567890";
   unsigned char dst[15]="1234597890";
   int stand = memcmp (src, dst, 10);
   int mine = memcmp (src, dst, 10);
   printf("%d\n", stand);
   printf("%d\n", mine);
}
