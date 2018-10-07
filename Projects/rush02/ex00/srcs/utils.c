/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:03:43 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/07 14:40:32 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;
	int	total_chars;
	char *result;

	total_chars = 0;
	if (dest)
		total_chars += ft_strlen(dest);
	total_chars += ft_strlen(src);
	result = (char*)malloc(sizeof(char) * (total_chars + 1));
	if (result)
	{
		i = 0;

		while (dest && dest[i] != '\0')
		{
			result[i] = dest[i];
			i++;
		}
		j = 0;
		while (src[j] != '\0')
		{
			result[i] = src[j];
			i++;
			j++;
		}
		result[i] = '\0';
		
		if (dest)
			free(dest);
	}
	return (result);
}
