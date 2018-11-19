/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:12:12 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/10 21:31:35 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (0);
}

int main()
{
	char *str1;
	char *str2;

	str1 = "Privet, ya kopiya !";
	ft_strcpy(str1, str2);
	printf("%s", str1);
	printf("\n");
	printf("%s", str2);
}
