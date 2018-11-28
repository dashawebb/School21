/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:51:15 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/28 23:08:55 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include <stdlib.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (needle[i] == '\0')
		return (haystack);
	while (haystack[i])
	{
		while ((needle[j]) && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

int main()
{
	char s1[11] = "0123456789";
	char s2[10] = "345";
	char *stand = strstr(s1, s2);
	char *mine = ft_strstr(s1, s2);
	printf("%d\n", stand-s1+1);
	printf("%d\n", mine-s1+1);
}
