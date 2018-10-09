/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:31:13 by taegon-i          #+#    #+#             */
/*   Updated: 2018/10/09 18:46:03 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

// пока не совсем доделана, надо проверять
// переход к другим мапам и тд
// плюс очень много строк

int	 ft_valid(int height, char **buff)
{
    char **arr;
    int i;
    int j;
    int length;
    //int height;
    int bug;
    
    bug = 0;
    i = 0;
    j = 0;
    length = 1;
    while (arr[0][j] != '\n')
    {
        length++;
        j++;
    }
    //проверка на то, что символ не единственный
    while (i < height)
    {
        j = 0;
        while (arr[i][j] != '\n')
        {
            if (arr[i][j] == '1 символ' || arr[i][j] == '2 символ')
                j++;
            else
            {
                bug++;
                break ;
            }
            if (arr[i][length] != '\n') //&& (length != j + 1)
                bug++;
        }
        i++;
    }
    if (bug > 0)
        write(1, "map error\n", 10)
}
