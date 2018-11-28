/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:45:05 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/28 13:45:22 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}

int main()
{
  int a = 'Q';
  int b = tolower(a);
  int c = ft_tolower(a);
  printf("%d   %d\n", b, c);
}
