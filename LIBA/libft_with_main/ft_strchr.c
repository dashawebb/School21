/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:17:10 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/03 18:41:08 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//#include "libft.h"

int ft_strlen(const char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strchr(const char *s, int c)
{
    int i;
    int len;
    const char *s1;

    s1 = s;
    i = 0;
    len = ft_strlen(s1);
    if ((char )c == '\0')
        return ((char *)s + len);
    while (s[i])
    {
        if (s[i] != (char )c)
            i++;
        else
            return ((char *)s + i);
    }
    return (NULL);
}

int main()
{
    char str [11]="";
    int ch = '\0';
    char *stand = strchr(str, ch);
    char *mine = ft_strchr(str, ch);
    printf("%s\n", stand);
    printf("%s\n", mine);
}
