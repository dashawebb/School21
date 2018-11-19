/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 13:18:20 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/09 13:47:26 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

// width и heigth глобальные переменные, отвечающие за размер мапы
// height задается в файле, как задается width??
// к этому моменту мы уже должны считать карту и заменить всё на 1 и 0

int        size(int ac, char **av)
{
    int lin_size;
    int i;
    int    max_size;
    
    i = 0;
    width = ft_strlen(av);    //как считать пока хз
    height = 9;                //допустим
    if (width < height)
        lin_size = height;
    else
        lin_size = width;
    while (i <= lin_size)
    {
        search_max_elem(av, lin_size);
        i++;
    }
}

int		search_max_elem(char **av, int lin_size)
{
	int i;
	int j;
	int max;
	int count;

	max = 0;
	i = 0;
	count = 0;
	while (i < width)
	{
		j = 0;
		while (av[i][j])
		{
			av[i][j] = count_nbr(av[i][j], av[i + 1][j], av[i][j + 1], av[i + 1][j + 1]);
			if (max < av[i][j])
			{
				max = av[i][j];
				count = 1;
			}
			if (max = av[i][j])
				count++;
			j++;
		}
		i++;
	}
}

int		count_nbr(int a, int b, int c, int d)
{
	return (min_nbr((a + b), (a + c), (a + d)));
}

int		min_nbr(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= c && b <= a)
		return (b);
	else if (c <= b && c <= a)
		return (c);
}
