/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 22:18:20 by elchrist          #+#    #+#             */
/*   Updated: 2018/11/21 23:29:14 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_print_error(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(2, &s[i], 1);
		i++;
	}
}

void	ft_display(char *argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;

	fd = open(argv, O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	close(fd);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
		ft_print_error("File name missing.\n");
	if (argc > 2)
		ft_print_error("Too many arguments.\n");
	else
		ft_display(argv[1]);
	return (0);
}
