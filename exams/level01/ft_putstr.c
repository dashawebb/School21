/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:08:23 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/10 21:11:50 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int main()
{
	char *str;
	str = "Sasha durak\nSasha molodec\n";
	ft_putstr(str);
}
