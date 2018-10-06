/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 15:33:45 by elchrist          #+#    #+#             */
/*   Updated: 2018/09/30 20:41:06 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
	{
		return (1);
	}
	else if ((*s1 == *s2) && (*s1 != '*') && (*s2 != '*'))
	{
		return (match(s1 + 1, s2 + 1));
	}
	else if ((*s1 == '*') && (*s2 == '*'))
	{
		return (match(s1 + 1, s2));
	}
	else if ((*s1 == '\0') && (*s2 == '*'))
	{
		return (match(s1, s2 + 1));
	}
	else if ((*s2 == '*') && (*s1 != '\0'))
	{
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	}
	else
	{
		return (0);
	}
}
