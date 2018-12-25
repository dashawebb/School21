/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 17:13:47 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/21 22:46:30 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdio.h>

int				is_error(const int fd, char **line, char **str)
{
	char		buff[BUFF_SIZE + 1];
	int			ret;

	ret = 0;
	if (BUFF_SIZE <= 0)
		return (1);
	if (fd < 0 || line == NULL)
		return (1);
	if (!*str)
	{
		if (!(*str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return (1);
	}
	if (str == NULL)
		return (1);
	if ((ret = read(fd, buff, 0)) < 0)
		return (1);
	return (0);
}

char			*ft_reading_line(char *s, int fd)
{
	char		buff[BUFF_SIZE + 1];
	int			ret;
	char		*temp;

	ret = 0;
	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		temp = s;
		s = ft_strjoin(s, buff);
		free(temp);
	}
	return (s);
}

int				get_next_line(const int fd, char **line)
{
	static char	*s[1024];
	int			count;
	char		*temp;

	count = 0;
	if (is_error(fd, line, &(s[fd])) == 1)
		return (-1);
	s[fd] = ft_reading_line(s[fd], fd);
	if (s[fd][count])
	{
		while (s[fd][count] && s[fd][count] != '\n')
			count++;
		if (count == 0)
			*line = ft_strnew(0);
		else
			*line = ft_strsub(s[fd], 0, count);
		temp = s[fd];
		s[fd] = ft_strdup(s[fd] + count + 1);
		free(temp);
		return (1);
	}
	else
		*line = ft_strnew(0);
	return (0);
}
