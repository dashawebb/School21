/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 17:13:47 by elchrist          #+#    #+#             */
/*   Updated: 2019/01/20 22:57:39 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdio.h>

int			is_error(const int fd, char **line, char **str)
{
	char		buff[BUFF_SIZE + 1];
	int		ret;

	if (BUFF_SIZE <= 0 || fd < 0)
		return (1);
	if (str == NULL || line == NULL)
		return (1);
	if ((ret = read(fd, buff, 0)) < 0)
		return (1);
	return (0);
}

char			*checking_line(char **s)
{
	char		*line;
	char		*n_ptr;
	int		len;

	line = NULL;
	n_ptr = ft_strchr(*s, '\n');
	if (n_ptr == NULL)
		return (line);
	len = n_ptr - *s;
	line = ft_strnew(len);
	line = ft_strncpy(line, *s, len);
	n_ptr = ft_strdup(n_ptr + 1);
	ft_strdel(s);
	*s = n_ptr;
	return (line);
}

char			*checking_end(char **s)
{
	char		*line;

	line = NULL;
	if ((ft_strlen(*s) != 0) && (ft_strchr(*s, '\n')) == NULL)
	{
		line = ft_strdup(*s);
		ft_strdel(s);
	}
	return (line);
}

int			get_next_line(const int fd, char **line)
{
	static char	*s[1024];
	char		buff[BUFF_SIZE + 1];
	int		ret;
	char		*temp;

	if (is_error(fd, line, &(s[fd])) == 1)
		return (-1);
	if (s[fd] == NULL)
		s[fd] = ft_strnew(0);
	while (1)
	{
		if ((*line = checking_line(&s[fd])) && *line)
			return (1);
		ret = read(fd, buff, BUFF_SIZE);
		buff[ret] = '\0';
		temp = ft_strjoin(s[fd], buff);
		free(s[fd]);
		s[fd] = temp;
		if (ret == 0)
		{
			if ((*line = checking_end(&s[fd])) && *line)
				return (1);
			return (0);
		}
	}
}
