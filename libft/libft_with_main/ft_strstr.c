/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:51:15 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/30 22:38:24 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int haystack_i;
	int needle_i;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		haystack_i = i;
		needle_i = 0;
		while (haystack[haystack_i] == needle[needle_i] && needle[needle_i])
		{
			haystack_i++;
			needle_i++;
		}
		if (needle[needle_i] == '\0' && needle_i > 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

int main()
{
		 char	*s1 = "MZIRIBMZIRIBMZP";
		 char	*s2 = "MZIRIBMZP";
		// char	*s2 = "FF";
		// char	*s1 = "see F your F return FF now FF";
		// char *s1 = "123456789";
		// char *s2 = "456";
		char	*i1 = strstr(s1, s2);
		char	*i2 = ft_strstr(s1, s2);
		printf("%s\n", i1);
		printf("%s\n", i2);
}
