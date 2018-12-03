/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:31:16 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/03 19:48:41 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    int     j;

    i = 0;
    j = 0;
    if (needle[j] == '\0')
        return ((char *)(haystack + i));
    while (haystack[i] && i < len)
    {
        if (needle[j] && (haystack[i] == needle[j]) && (i < len))
        {
            i++;
            j++;
        }
        else
            i++;
        if (needle[j] == '\0')
            return ((char *) (haystack + i - j));
    }
    return (NULL);
}

int     main()
{
    char	*s1 = "see FF your FF return FF now";
	char	*s2 = "FF";
	size_t	max = ft_strlen(s1);
    char	*stand = strnstr(s1, s2, max);
	char	*mine = ft_strnstr(s1, s2, max);
    printf("%s\n", stand);
    printf("%s\n", mine);
    // char s1[11] = "0123456789";
    // char s2[11] = "7";
    // char *stand = strnstr(s1, s2, 8);
    // char *mine = ft_strnstr(s1, s2, 8);
    // printf("%ld\n", stand - s1);
    // printf("%ld\n", mine - s1);
}
