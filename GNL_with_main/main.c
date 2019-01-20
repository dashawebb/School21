/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 17:29:04 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/21 22:48:50 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int	i;

	i = 1;
	line = (char*)malloc(100);
	if (argc < 2)
		return (write(1, "File name missing.\n", 19));
	if (argc > 1)
	{
		while (i < argc)
	    	{
			fd = open(argv[i], O_RDONLY);
			while (get_next_line(fd, &line))
			{
				printf("%s\n", line);
			}
			fd = close(fd);
			i++;
	    	}
	}
}
