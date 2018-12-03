/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:00:20 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/01 18:42:59 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void  *ft_memchr(const void *s, int c, size_t len)
{
    unsigned char  *a;
    int             i;

    i = 0;
    a = (unsigned char *) s;
    while (len > 0 && *a != (unsigned char )c)
    {
        len--;
        a++;
    }
    if (len == 0)
        return (NULL);
    else
        return (a + i);
}

int main()
{
    char			*src = "/|\x12\xff\x09\x42\042\42|\\";
	int				size = 10;
    char *stand = memchr(src, '\42', size);
    char *mine = ft_memchr(src, '\42', size);
    printf("%s\n", stand);
    printf("%s\n", mine);
}
