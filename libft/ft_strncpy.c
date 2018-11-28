/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:13:55 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/28 22:33:28 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main()
{
	const char *s1 = "Privet angle!";
	char *s2;
	char *a = ft_strncpy(s2, s1, 20);
	char *b = strncpy(s2, s1, 20);
	printf("%s\n", a);
	printf("%s\n", b);
}
