/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:13:55 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/30 22:10:52 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while(i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while(i < len)
	{
		dst[i++] = '\0';
	}
	return (dst);
}

int main()
{
	char	*src = "--> nyancat <--\n\r";
	char	dst1[30];
	char	dst2[30];
	size_t	max = 12;
	char *a = ft_strncpy(dst1, src, max);
	char *b = strncpy(dst2, src, max);
	printf("%s\n", a);
	printf("%s\n", b);
}
