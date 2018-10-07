/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 13:53:49 by rschuppe          #+#    #+#             */
/*   Updated: 2018/10/07 13:53:51 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	handler(char *str)
{
	//printf("handler start");
	int i;
	int cols;
	int rows;
	int types[3] = { -1, -1, -1 };
	
	if (ft_get_rush_size(str, &cols, &rows) == 0)
	{
		printf("Size error");
	}
	else if (ft_get_rush_type(str, cols, rows, types) == 0)
	{
		printf("Type error");
	}
	// else if (ft_valid(str, types, cols, rows) == 0)
	// {
	// 	printf("Valid error");
	// }
	else
	{
		i = 0;
		while (types[i] != -1 && i < 3)
		{
			printf("%s[rush-%02d] [%d] [%d]", (i ? " || " : ""), types[i], cols, rows);
			i++;
		}
	}
	
}

int	main()
{
	char buf[32];
	char *res;
	int size;

	res = NULL;
	while ((size = read(0, &buf, 32)))
	{
		buf[size] = '\0';
		res = ft_strcat(res, buf);
	}
	printf("%s\n", res);
	handler(res);
	return (0);
}
