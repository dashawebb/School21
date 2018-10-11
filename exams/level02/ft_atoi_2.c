/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 21:11:21 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/11 21:19:30 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int        ft_atoi(char *s)
{
    int        sign;
    long    r;

    r = 0;
    sign = 1;
    while (*s == 32 || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    if (*s == '+')
        s++;
    while (*s >= '0' && *s <= '9')
    {
        r = r * 10 + *s - '0';
        s++;
    }
    return (sign * (int)r);
}

int        main(void)
{
    char a[] = "    \n\n\v\f\r\t -15AAAgreghrsth";
    printf("%d\n",ft_atoi(a));
}
