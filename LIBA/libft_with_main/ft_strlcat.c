/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:23:44 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/03 20:24:09 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] && (i < size))
		i++;
	while (src[j] && ((i + j + 1) < size))
	{
		dst[i + j] = src[j];
		//i++;
		j++;
	}
	if (i < size)
		dst[i + j] = 0;
	return (i + ft_strlen(src));
}

int		main()
{
	char dst[1024] = "Privet";
	char src[1024] = ", Sasha!";

	strncat(dst, src, 15);
//	char *s4 = ft_strncat(dst, src, 15);
	printf("%s\n", dst);
//	printf("%s\n", s4);
}
