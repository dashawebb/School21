/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:14:02 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/13 23:30:17 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h> // тут лежит EOF
#include "get_next_line.h"

int is_error(const int fd, char **line, char *str)
{
    if (fd < 0 || line == NULL)
        return (1);
    if (!*line)
        return (1);
    str = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
    if (str == NULL)
        return (1);
    return (0);
}

// int new_line(char **s, char **line, int fd, int size)
// {
//     int len; //длина строки
//     char *tmp;
//
//     len = 0;
//     while (s[fd][len] != '\n' && s[fd][len] != '\0')
//         len++;
//     if (s[fd][len] == '\n')
// 	{
// 		*line = ft_strsub(s[fd], 0, len); //ищем подстроку в s[fd] c 0 до len
// 		tmp = ft_strdup(s[fd] + len + 1); //выделяем память и копируем
// 		free(s[fd]);   //чистим т.к. уже скопировали содержимое
// 		s[fd] = tmp;
// 		if (s[fd][0] == '\0')
// 			ft_strdel(&s[fd]);
// 	}
// 	else if (s[fd][len] == '\0')
// 	{
// 	// 	if (size == BUFF_SIZE)
// 	// 		return (get_next_line(fd, line));
// 	// 	*line = ft_strdup(s[fd]);
// 	// 	ft_strdel(&s[fd]);
// 	// }
//     return (1);
// }

int get_next_line(const int fd, char **line)
{
    static char *s[1024];
	char buf[BUF_SIZE + 1];
	int ret;
    char *temp;

    if (is_error(fd, line, str) == 1) // или &str?
        return (-1);
    while (ret = read(fd, buf, BUFF_SIZE) > 0)
    {
        buf[ret] = '\0';
        temp = ft_strjoin(s[fd], buf);
        free(s[fd]);
    }
}
