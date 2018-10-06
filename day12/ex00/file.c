/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:27:19 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/04 21:47:17 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 4096

int	main(int argc, char **argv)
{
	int		fd;
	int		nb_char;
	char	buf[BUF_SIZE + 1];

	nb_char = 1;
	if (argc < 2)
		return (write(1, "File name missing.\n", 19));
	if (argc > 2)
		return (write(1, "Too many arguments.\n", 20));
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (write(1, "OPEN() error.\n", 14));
		while (nb_char)
		{
			nb_char = read(fd, buf, 4096);
			buf[4095] = '\0';
			write(1, buf, nb_char);
		}
		fd = close(fd);
		if (fd == -1)
			return (write(1, "CLOSE() eror.\n", 15));
	}
}
