/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:37:38 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/28 21:55:11 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int main()
{
	char s1[1024] = "Privet";
	char s2[1024] = ", Sasha!";

//	strcat(s1, s2);
	char *s4 = ft_strcat(s1, s2);
//	printf("%s\n", s1);
	printf("%s\n", s4);
}
