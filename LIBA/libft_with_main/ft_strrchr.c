/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:41:34 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/03 18:46:47 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
//#include "libft.h"
int ft_strlen(const char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strrchr(const char *s, int c)
{
    int i;
    size_t len;
    const char *s1;

    s1 = s;
    i = 0;
    len = ft_strlen(s1);
    if ((char )c == '\0')
        return ((char *)s + len);
    while (len > 0)
    {
        if (s[len] != (char )c)
            len--;
        else
            return ((char *)s + len);
    }
    return (NULL);
}
int main()
{
    char str [11]="12321";
    int ch = '1';
    char *stand = strrchr(str, ch);
    char *mine = ft_strrchr(str, ch);
    printf("%s\n", stand);
    printf("%s\n", mine);
}
