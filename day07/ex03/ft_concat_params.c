/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 22:13:28 by elchrist          #+#    #+#             */
/*   Updated: 2018/09/27 23:32:10 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		count;

	count = 0;
	while (count < argc)
	{
		j = 0;
		while (argv[j] != '\0')
		{
			count++;
			j++;
		}
	}
	str = (char*)malloc(sizeof(*str) * (count + 1));
	i = 1;
	while (i < argc)
	{
		str = ft_strcat(str, argv[i + 1]);
		i++;
	}
	return (str);
}
