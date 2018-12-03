/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:47:29 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/03 20:36:31 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	size_t		len;
	const char	*s1;

	s1 = s;
	i = 0;
	len = ft_strlen(s1);
	if ((char)c == '\0')
		return ((char *)s + len);
	while (len > 0)
	{
		if (s[len] != (char)c)
			len--;
		else
			return ((char *)s + len);
	}
	return (NULL);
}
