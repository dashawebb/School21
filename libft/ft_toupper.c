/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:45:30 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/28 13:45:31 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}

int main()
{
  int a = 'B';
  int b = toupper(a);
  int c = ft_toupper(a);
  printf("%d   %d\n", b, c);
}
