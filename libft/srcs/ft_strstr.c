/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:09:24 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/28 23:12:08 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

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
