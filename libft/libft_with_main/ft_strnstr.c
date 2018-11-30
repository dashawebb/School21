/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:31:16 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/29 17:54:34 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (needle[j] == '\0')
        return ((char *)haystack);
    while (haystack[i])
    {
        while (needle[j] && haystack[i] == needle[j] && i <= len)
        {
            i++;
            j++;
        }
        if (needle[j] == '\0')
            return ((char *) haystack);
        haystack++;
    }
    return (NULL);
}

int     main()
{
    char s1[11] = "0123456789";
    char s2[10] = "67";
    char *stand = strnstr(s1, s2, 4);
    char *mine = ft_strnstr(s1, s2, 4);
    printf("%ld\n", stand - s1);
    printf("%ld\n", mine - s1);
}
