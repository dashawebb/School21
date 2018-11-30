/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:56:57 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/29 18:43:30 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strchr(const char *s, int c)
{
    int i;
    int len;

    len = ft_strlen(s);
    if (c == '\0')
        return (s[len + 1]);
    while (s[i])
    {
        if (s[i] != c)
            i++;
        else
            return (s[i]);
    }
    return (NULL);
}

int     main()
{
    char    str[10] = "012345678";
    int     ch = '6';
    char    *stand = strchr(str, ch);
    char    *mine = ft_strchr(str, ch);
    printf("%ld\n", stand - str + 1);
    printf("%ld\n", mine - str + 1);
}
